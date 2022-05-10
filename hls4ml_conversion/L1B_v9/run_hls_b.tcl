#################
#    HLS4ML
#################

array set opt {
  reset      1
  csim       1
  synth      1
  cosim      0
  validation 0
  export     0
  vsynth     0
}

## HELPER FUNCTIONS
proc report_time { op_name time_start time_end } {
  set time_taken [expr $time_end - $time_start]
  set time_s [expr ($time_taken / 1000) % 60]
  set time_m [expr ($time_taken / (1000*60)) % 60]
  set time_h [expr ($time_taken / (1000*60*60)) % 24]
  puts "***** ${op_name} COMPLETED IN ${time_h}h${time_m}m${time_s}s *****"
}

file mkdir tb_data
set CSIM_RESULTS "./tb_data/csim_results.log"
set RTL_COSIM_RESULTS "./tb_data/rtl_cosim_results.log"

if {$opt(reset)} {
  open_project -reset proj_b
} else {
  open_project proj_b
}

# Top function
set_top algo_b
add_files firmware/algo_b.cpp -cflags "-std=c++0x"
add_files firmware/myproject.cpp -cflags "-std=c++0x"

#Test bench
add_files -tb algo_b_test.cpp -cflags "-std=c++0x"
add_files -tb firmware/weights
add_files -tb tb_data

#Reset solution
open_solution -reset "solution1"

#Specify FPGA and clock constraints
catch {config_array_partition -maximum_size 4096}
config_compile -name_max_length 60
set_part {xcvu9p-flgb2104-2-i}
create_clock -period 5 -name default
set_clock_uncertainty 0.5

config_interface -trim_dangling_port

if {$opt(csim)} {
  puts "***** C SIMULATION *****"
  set time_start [clock clicks -milliseconds]
  csim_design
  set time_end [clock clicks -milliseconds]
  report_time "C SIMULATION" $time_start $time_end
}

if {$opt(synth)} {
  puts "***** C/RTL SYNTHESIS *****"
  set time_start [clock clicks -milliseconds]
  csynth_design
  set time_end [clock clicks -milliseconds]
  report_time "C/RTL SYNTHESIS" $time_start $time_end
}

#csynth_design
#cosim_design  -trace_level all
#export_design -format ip_catalog -vendor "cern-cms" -version 1.0 -description algo_tau


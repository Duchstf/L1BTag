#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/dhoang/L1BTag/hls4ml_conversion/L1B_v9_v2/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}

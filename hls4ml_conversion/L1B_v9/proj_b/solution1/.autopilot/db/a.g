#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/dhoang/L1BTag/hls4ml_conversion/L1B_v9/proj_b/solution1/.autopilot/db/a.g.bc ${1+"$@"}

#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/dhoang/L1BTag/hls4ml_conversion/official_15feat_9bit/qModel9/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}

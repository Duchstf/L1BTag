# PF implementation, with MP7 data wrapper around it
set l1pfTopFunc algo_tau

# reference (non-wrapped) PF implementation
set l1pfRefFunc ${l1pfAlgo}_ref

# set to zero to turn off C validation (runs but does not check against the reference implementation)
set l1pfValidate 1

## version of the IP Core output
set l1pfIPVersion 1.0

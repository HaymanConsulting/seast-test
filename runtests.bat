GOTO CUR_PERIODIC

:CUR_FIRST
ECHO "Running current code base, first-order tests"
chdir "./current/5MW_OC4Semi-firstonly/SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver.inp"
chdir "../HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_no_offset.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_w_surge.fst"
"../../bin/openfast_x64.exe" "./fast_driver_noWEIS.fst"
chdir "../../.."  REM move back up to top-level folder
GOTO FINISH

:CUR_SECOND
ECHO "Running current code base, first-order + second-order tests"
chdir "./current/5MW_OC4Semi-second/SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver.inp"
chdir "../HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_no_offset.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_w_surge.fst"
chdir "../../.."  REM move back up to top-level folder
GOTO FINISH

:ORIG_FIRST
ECHO "Running original code base, first-order tests"
chdir "./original/5MW_OC4Semi-firstonly/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
chdir "../../.."  REM move back up to top-level folder
GOTO FINISH

:ORIG_SECOND
ECHO "Running original code base, first-order + second-order tests"
chdir "./original/5MW_OC4Semi-second/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
chdir "../../.."  REM move back up to top-level folder
GOTO FINISH

:CUR_PERIODIC
ECHO "Running original code base, periodic waves tests"
chdir "./current/Periodic/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_zero_disp.inp"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_7m_disp.inp"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_14m_disp.inp"
chdir "../.."  REM move back up to top-level folder
GOTO FINISH

:CUR_NBODYMOD
ECHO "Running current code base, NBodyMod tests"
chdir "./current/NBodyMod1/"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod1.dvr"
cd "../NBodyMod2"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod2.dvr"
cd "../NBodyMod3"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod3.dvr"
cd "../.."
GOTO FINISH

:ORIG_NBODYMOD
ECHO "Running original code base, NBodyMod tests"
chdir "./original/NBodyMod1/"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod1.dvr"
cd "../NBodyMod2"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod2.dvr"
cd "../NBodyMod3"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod3.dvr"
cd "../.."
GOTO FINISH

:FINISH
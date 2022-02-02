
SET JOBS=ALL
GOTO CUR_WRITEKIN2

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
chdir "../../.."
:TESTIF
IF "%JOBS%"=="ALL" (GOTO ORIG_FIRST) ELSE (GOTO FINISH)

:ORIG_FIRST
ECHO "Running original code base, first-order tests"
chdir "./original/5MW_OC4Semi-firstonly/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_w_surge.fst"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_no_offset.fst"
chdir "../../.."
IF "%JOBS%"=="ALL" (GOTO CUR_SECOND) ELSE (GOTO FINISH)

:CUR_SECOND
ECHO "Running current code base, first-order + second-order tests"
chdir "./current/5MW_OC4Semi-second/SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver.inp"
chdir "../HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
chdir "../../.."  
IF "%JOBS%"=="ALL" (GOTO ORIG_SECOND) ELSE (GOTO FINISH)


:ORIG_SECOND
se, first-order + second-order tests"
chdir "./original/5MW_OC4Semi-second/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver.fst"
chdir "../../.."
IF "%JOBS%"=="ALL" (GOTO CUR_PERIODIC) ELSE (GOTO FINISH)

:CUR_PERIODIC
ECHO "Running original code base, periodic waves tests"
chdir "./current/Periodic/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_zero_disp.inp"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_7m_disp.inp"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_14m_disp.inp"
chdir "../../.."
IF "%JOBS%"=="ALL" (GOTO CUR_NBODYMOD) ELSE (GOTO FINISH)

:CUR_NBODYMOD
ECHO "Running current code base, NBodyMod tests"
chdir "./current/NBodyMod1/"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod1.dvr"
cd "../NBodyMod2"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod2.dvr"
cd "../NBodyMod3"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod3.dvr"
cd "../.."
IF "%JOBS%"=="ALL" (GOTO ORIG_NBODYMOD) ELSE (GOTO FINISH)

:ORIG_NBODYMOD
ECHO "Running original code base, NBodyMod tests"
chdir "./original/NBodyMod1/"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod1.dvr"
cd "../NBodyMod2"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod2.dvr"
cd "../NBodyMod3"
"../bin/HydroDynDriver_x64.exe" "./NBodyMod3.dvr"
cd "../.."
IF "%JOBS%"=="ALL" (GOTO CUR_WRITEKIN1) ELSE (GOTO FINISH)

:CUR_WRITEKIN1
ECHO "Writing Wave Elevation at (0,0) for WaveMod = 3"
chdir "./current/5MW_OC4Semi-firstonly/SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver_wr_kin1.inp"
cd "../../.."
IF "%JOBS%"=="ALL" (GOTO ORIG_WAVEMOD5) ELSE (GOTO FINISH)
REM The user of this script must manually copy the WaveData.Elev file produced by the above simulation
REM   to the original/5MW_OC4Semi-firstonly/HDSim location for use in the simulation below

:ORIG_WAVEMOD5
ECHO "Running original code base, first-order test for WaveMod=5"
chdir "./original/5MW_OC4Semi-firstonly/HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_WaveMod5.inp"
chdir "../../.."
IF "%JOBS%"=="ALL" (GOTO CUR_WAVEMOD5) ELSE (GOTO FINISH)

:CUR_WAVEMOD5
ECHO "Running current code base, first-order test for WaveMod=5"
chdir "./current/5MW_OC4Semi-firstonly/SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver_WaveMod5.inp"
cd "../HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_WaveMod5.inp"
cd "../../.."
IF "%JOBS%"=="ALL" (GOTO CUR_WRITEKIN2) ELSE (GOTO FINISH)

:CUR_WRITEKIN2
ECHO "Writing full wave kinematics for WaveMod = 3"
chdir "./current/WriteWaveKinematics\SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver_Write.inp"
IF "%JOBS%"=="ALL" (GOTO CUR_WAVEMOD6) ELSE (GOTO FINISH)

:CUR_WAVEMOD6
ECHO "Running current code base, first-order test for WaveMod=6"
chdir "./current/WriteWaveKinematics\SeaStSim"
"../../bin/SeaStateDriver_x64.exe" "./seastate_driver_WaveMod6.inp"
chdir "../HDSim"
"../../bin/HydroDynDriver_x64.exe" "./hd_driver_WaveMod6.inp"
chdir "../FASTSim"
"../../bin/openfast_x64.exe" "./fast_driver_fixed_no_offset.fst"

:FINISH











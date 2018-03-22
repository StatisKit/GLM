echo ON

scons autowig --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --autowig-no-wrappers
if errorlevel 1 exit 1

echo OFF

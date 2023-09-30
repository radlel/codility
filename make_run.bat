@echo off
cls

ECHO Clean build folder ..
IF EXIST "build" RD /S /Q "build"
MD "build"

ECHO Generate Cmake files ..
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles"

ECHO Build all ...
make all

ECHO Run tests ...
cd test
for /r "." %%a in (*.exe) do start /WAIT /B "" "%%~fa"
cd ..

cd ..
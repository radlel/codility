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
codility_test.exe
cd ..

cd ..
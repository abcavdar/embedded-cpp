rem @echo off
setlocal EnableDelayedExpansion
if not exist bin mkdir bin
if not exist build mkdir build 
set objects= 
for /R src %%f in (*.cpp *.cc) do (g++ -c -g -std=c++20 -I include -I src -save-temps=obj %%f -o build\\%%~nf.o & set objects=!objects! build\\%%~nf.o) 
g++ !objects! -L lib -o bin\\program.exe
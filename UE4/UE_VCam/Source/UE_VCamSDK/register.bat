@echo off
title Register UE_VCam
mode con lines=36 cols=64
%1 mshta vbscript:CreateObject("Shell.Application").ShellExecute("cmd.exe","/c %~s0 ::","","runas",1)(window.close)&&exit
cd /d "%~dp0"
rem ---------------------------------

regsvr32 /s VCam32.dll
regsvr32 /s VCam64.dll
:--------------------------------------

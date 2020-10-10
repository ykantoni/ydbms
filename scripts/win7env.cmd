cd C:\projects\ydbms\build
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86_amd64
SET PATH=C:\tools\cmake-3.18.2\bin;%PATH%
@echo **********************
@echo cd C:\projects\ydbms\build
@echo cmake --build .
@echo **********************
"C:\Program Files\Git\git-cmd.exe"


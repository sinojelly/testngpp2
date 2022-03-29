set INSTALL_PATH=D:\Develop\test_tools\testngpp2_install
@rem cmake -B build . -DCMAKE_INSTALL_PREFIX=%INSTALL_PATH%  @rem default compiler
cmake -B build_MinGW . -DCMAKE_INSTALL_PREFIX=%INSTALL_PATH% -G "MinGW Makefiles"
cmake --build build_MinGW --target install

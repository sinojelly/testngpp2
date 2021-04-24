set INSTALL_PATH=D:\Develop\test_tools\testngpp2_install
cmake -B build . -DCMAKE_INSTALL_PREFIX=%INSTALL_PATH%
cmake --build build --target install

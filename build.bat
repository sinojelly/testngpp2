cmake -B build .
cmake --build build
build\src\Debug\testngpp-runner.exe -l"testngppstdoutlistener -c -v" -m

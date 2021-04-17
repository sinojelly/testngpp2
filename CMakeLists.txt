
CMAKE_MINIMUM_REQUIRED(VERSION 3.12...3.19)

PROJECT(testngpp)

INCLUDE(ProjectVar.txt)


ADD_SUBDIRECTORY(src)


########################################################
INSTALL(DIRECTORY include/testngpp DESTINATION include
          PATTERN "comm" EXCLUDE
          PATTERN "runner" EXCLUDE
          PATTERN "win32" EXCLUDE)


CMAKE_MINIMUM_REQUIRED(VERSION 3.12...3.19)

PROJECT(testngpp2)

INCLUDE(ProjectVar.txt)


ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(samples)
ADD_SUBDIRECTORY(scripts)

########################################################
INSTALL(DIRECTORY include/testngpp DESTINATION include
          PATTERN "comm" EXCLUDE
          PATTERN "runner" EXCLUDE
          PATTERN "win32" EXCLUDE)

INSTALL(DIRECTORY include/fake_boost DESTINATION include
          PATTERN ".svn" EXCLUDE)

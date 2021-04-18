###############################
# find python3
find_package (Python3 COMPONENTS Interpreter)

IF(Python3_FOUND)
    SET(PYTHON ${Python3_EXECUTABLE})
ELSE()
    MESSAGE(FATAL_ERROR "No Python interpreter found")
ENDIF(Python3_FOUND)

###############################
# definitions

ADD_DEFINITIONS(
    -DPACKAGE_NAME=${PACKAGE_NAME}
    -DPACKAGE_STRING=${PACKAGE_STRING}
    -DPACKAGE_BUGREPORT=${PACKAGE_BUGREPORT}
    -DPACKAGE_URL=${PACKAGE_URL}
    -DPACKAGE=${PACKAGE}
    -DVERSION=${VERSION}
)

IF(UNIX OR MINGW)
ADD_DEFINITIONS(
    -g -ggdb
)
ENDIF(UNIX OR MINGW)

IF(UNIX AND NOT CYGWIN)
ADD_DEFINITIONS(
    -fPIC
)
ENDIF(UNIX AND NOT CYGWIN)

ADD_DEFINITIONS(-D__STDC_FORMAT_MACROS)

IF(CMAKE_CL_64)
    ADD_DEFINITIONS(-DWIN64)
ENDIF(CMAKE_CL_64)

IF(MSVC)
  ADD_DEFINITIONS( -D_CRT_SECURE_NO_WARNINGS )
ENDIF(MSVC)


###############################
# includes

INCLUDE_DIRECTORIES(BEFORE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/3rdparty ${CMAKE_SOURCE_DIR}/src/utils)
IF(MSVC)
INCLUDE_DIRECTORIES(BEFORE ${CMAKE_SOURCE_DIR}/include/msinttypes)
ENDIF(MSVC)

###############################
# Generate Test Suite cxx files

SET(TEST_SUITES_DIR ${CMAKE_SOURCE_DIR}/gen_testsuites)
SET(TEST_GENERATOR ${CMAKE_SOURCE_DIR}/scripts/testngppgen.py)
SET(TEST_SUITE_PREFIX ut_)
SET(UT_CASES TestBar TestCxxTest TestFoo TestMemLeak)

FOREACH(CASE ${UT_CASES})

SET(INPUT_H ${CMAKE_SOURCE_DIR}/samples/${CASE}.h)
SET(OUTPUT_CXX ${TEST_SUITES_DIR}/ut_${CASE}.cxx)

ADD_CUSTOM_COMMAND(
  OUTPUT ${OUTPUT_CXX}
  COMMAND ${PYTHON} ${TEST_GENERATOR} -d ${TEST_SUITES_DIR} -p ${TEST_SUITE_PREFIX} ${INPUT_H}
  DEPENDS ${INPUT_H}
)

MESSAGE(${PYTHON} ${TEST_GENERATOR} -d ${TEST_SUITES_DIR} -p ${TEST_SUITE_PREFIX} ${INPUT_H})
# execute_process(${PYTHON} ${TEST_GENERATOR} -d ${TEST_SUITES_DIR} -p ${TEST_SUITE_PREFIX} ${INPUT_H})

ENDFOREACH()

###############################
# sources

file(GLOB_RECURSE TESTNGPP_SRCS ./*.cpp ./*.c)
file(GLOB_RECURSE TESTSUITE_SRCS ${TEST_SUITES_DIR}/*.cxx)

###############################
# targets

ADD_LIBRARY(testngpp-static STATIC ${TESTNGPP_SRCS})

INSTALL(
  TARGETS testngpp-static
  ARCHIVE DESTINATION testngpp/lib)


ADD_EXECUTABLE(testngpp-runner ${TESTNGPP_SRCS} ${TESTSUITE_SRCS}) 
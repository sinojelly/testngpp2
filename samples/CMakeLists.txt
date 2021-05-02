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

IF(UNIX OR MINGW)
ADD_DEFINITIONS(
    -g -ggdb
)
ADD_LINK_OPTIONS(
    -rdynamic
)
ENDIF(UNIX OR MINGW)

ADD_DEFINITIONS(-D__STDC_FORMAT_MACROS)

IF(CMAKE_CL_64)
    ADD_DEFINITIONS(-DWIN64)
ENDIF(CMAKE_CL_64)

IF(MSVC)
  ADD_DEFINITIONS( -D_CRT_SECURE_NO_WARNINGS /source-charset:utf-8)
ENDIF(MSVC)


###############################
# includes

INCLUDE_DIRECTORIES(BEFORE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/3rdparty)
IF(MSVC)
#INCLUDE_DIRECTORIES(BEFORE ${CMAKE_SOURCE_DIR}/include/msinttypes)
ENDIF(MSVC)

###############################
# Generate Test Suite cxx files

SET(TEST_SUITES_DIR ${CMAKE_SOURCE_DIR}/gen_testsuites)
SET(TEST_GENERATOR ${CMAKE_SOURCE_DIR}/scripts/testngppgen.py)
SET(TEST_SUITE_PREFIX ut_)

SET(TESTSUITE_ENTRY ${TEST_SUITES_DIR}/AllTestSuites.cxx)
SET(TESTSUITE_SRCS ${TESTSUITE_ENTRY})

SET(UT_CASE_DIR ${CMAKE_SOURCE_DIR}/samples)
file(GLOB_RECURSE UT_CASES_PATH ${UT_CASE_DIR}/*.h) # find all testcase .h files

FOREACH(CASE_PATH ${UT_CASES_PATH})

GET_FILENAME_COMPONENT(CASE ${CASE_PATH} NAME_WE)

SET(INPUT_H ${UT_CASE_DIR}/${CASE}.h)
SET(OUTPUT_CXX ${TEST_SUITES_DIR}/ut_${CASE}.cxx)

SET(TESTSUITE_SRCS ${TESTSUITE_SRCS} ${OUTPUT_CXX})

ADD_CUSTOM_COMMAND(
  OUTPUT ${OUTPUT_CXX} ${TESTSUITE_ENTRY}
  COMMAND ${PYTHON} ${TEST_GENERATOR} -d ${TEST_SUITES_DIR} -p ${TEST_SUITE_PREFIX} ${INPUT_H}
  DEPENDS ${INPUT_H}
)

ENDFOREACH()

###############################
# targets

ADD_EXECUTABLE(SampleTests ${TESTSUITE_SRCS}) 
ADD_DEPENDENCIES(SampleTests testngpp2)

IF(UNIX)
TARGET_LINK_LIBRARIES(SampleTests testngpp2 dl)
ELSE()
TARGET_LINK_LIBRARIES(SampleTests testngpp2)
ENDIF()

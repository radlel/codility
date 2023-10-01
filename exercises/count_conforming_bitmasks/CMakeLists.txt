#[[
This CMakeLists file is generic and can be copy-pasted for different 'exercices'.
]]

set(DIR_PATH ${CMAKE_CURRENT_LIST_DIR})

get_filename_component(BINARY ${DIR_PATH} NAME)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES} ${PROJECT_SOURCE_DIR}/exercises/main.cpp)

include_directories(${DIR_PATH}/include/)

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})
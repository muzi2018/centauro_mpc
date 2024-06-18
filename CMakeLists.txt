cmake_minimum_required(VERSION 3.5)
project(phase_manager LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 3.3 REQUIRED)
find_package(catkin REQUIRED COMPONENTS
             roscpp
             message_generation
             )

include_directories(
    include/
    src/
    ${EIGEN3_INCLUDE_DIR}
    ${catkin_INCLUDE_DIRS}
)
set(LIBRARY_TARGET_NAME phase_manager) 
set(phase_manager_SRC
    src/timeline.cpp
    )
add_library(${LIBRARY_TARGET_NAME} SHARED
${phase_manager_SRC}
)
target_link_libraries(${LIBRARY_TARGET_NAME}
    PUBLIC
    ${catkin_LIBRARIES}
    )
target_include_directories(${LIBRARY_TARGET_NAME}
    INTERFACE
    ${EIGEN3_INCLUDE_DIR})


add_executable(run_test tests/main.cpp)
target_link_libraries(run_test PUBLIC ${LIBRARY_TARGET_NAME})



install(TARGETS  ${LIBRARY_TARGET_NAME}
EXPORT   ${LIBRARY_TARGET_NAME}
LIBRARY  DESTINATION "${CMAKE_INSTALL_LIBDIR}" COMPONENT shlib
ARCHIVE  DESTINATION "${CMAKE_INSTALL_LIBDIR}" COMPONENT lib
RUNTIME  DESTINATION "${CMAKE_INSTALL_BINDIR}" COMPONENT bin)


cmake_minimum_required(VERSION 3.14)
project(c__)

set(CMAKE_CXX_STANDARD 17)

add_executable(c__ main.cpp InputReader.h InputDatum/InputData.cpp InputDatum/InputData.h InputDatum/D1Data.cpp InputDatum/D1Data.h Solvers/D1Solver.h Solvers/ChallengeSolver.h Solvers/D1Solver.cpp InputDatum/D2Data.cpp InputDatum/D2Data.h Solvers/D2Solver.cpp Solvers/D2Solver.h)

add_custom_command(TARGET c__ POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/InputFiles $<TARGET_FILE_DIR:c__>/InputFiles)
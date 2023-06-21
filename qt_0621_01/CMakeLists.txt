cmake_minimum_required(VERSION 3.14)

project(qt_0621_01 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(qt_0621_01
  main.cpp
  animal.cpp
  animal.h
  mammal.cpp
  mammal.h
  canine.cpp
  canine.h
  feline.cpp
  feline.h
#  monster.cpp
#  monster.h
)
target_link_libraries(qt_0621_01 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS qt_0621_01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

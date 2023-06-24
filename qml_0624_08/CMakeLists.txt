cmake_minimum_required(VERSION 3.16)

project(qml_0624_08 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appqml_0624_08
    main.cpp
)

qt_add_qml_module(appqml_0624_08
    URI qml_0624_08
    VERSION 1.0
    QML_FILES Main.qml
    RESOURCES
        image.jpeg
)

set_target_properties(appqml_0624_08 PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appqml_0624_08
    PRIVATE Qt6::Quick
)

install(TARGETS appqml_0624_08
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

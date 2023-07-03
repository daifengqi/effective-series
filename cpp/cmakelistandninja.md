An introduction to writing CMakeLists.txt and using Ninja as a build system for C++ projects. I'll start with CMake and then move on to Ninja.

## CMake
CMake is a cross-platform build system that allows you to generate build files for various platforms and build tools (such as Make, Visual Studio, and Ninja). CMakeLists.txt is the configuration file that CMake uses to understand how to build your project.

Here are some common keywords and their usage:

cmake_minimum_required(VERSION x.y): Specifies the minimum required CMake version.
cmake_minimum_required(VERSION 3.10)

project(PROJECT_NAME): Sets the project name.
project(MyProject)

set(VARIABLE value): Sets the value of a variable.
set(SOURCES main.cpp foo.cpp)

add_executable(TARGET_NAME ${SOURCES}): Creates an executable target with the specified sources.
add_executable(MyProject ${SOURCES})

add_library(TARGET_NAME TYPE ${SOURCES}): Creates a library target with the specified sources. TYPE can be STATIC, SHARED, or MODULE.
add_library(MyLibrary STATIC ${SOURCES})

target_include_directories(TARGET_NAME PUBLIC/PRIVATE/INTERFACE ${INCLUDE_DIRS}): Specifies the include directories for a target. PUBLIC, PRIVATE, and INTERFACE determine the visibility and inheritance of the include directories.
target_include_directories(MyProject PUBLIC include)

target_link_libraries(TARGET_NAME PUBLIC/PRIVATE/INTERFACE LIBRARIES): Links libraries to a target. PUBLIC, PRIVATE, and INTERFACE determine the visibility and inheritance of the linked libraries.
target_link_libraries(MyProject PRIVATE MyLibrary)

find_package(PACKAGE_NAME VERSION REQUIRED/QUIET): Finds and loads settings for an external package. If REQUIRED is specified, CMake will produce an error if the package is not found.
find_package(Boost 1.65 REQUIRED COMPONENTS filesystem)

add_subdirectory(SUBDIRECTORY): Adds a subdirectory to the build. CMake will look for a CMakeLists.txt file in the specified subdirectory and process it.
add_subdirectory(libs)

Here's an example of a simple CMakeLists.txt file:

```
cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(SOURCES main.cpp foo.cpp)
add_executable(MyProject ${SOURCES})

target_include_directories(MyProject PUBLIC include)

add_subdirectory(libs)
target_link_libraries(MyProject PRIVATE MyLibrary)
```


## Ninja
Ninja is a small build system focused on speed. It's often used as a backend for other build systems, like CMake. To use Ninja with CMake, you don't need to write a specific Ninja file. Instead, you can generate Ninja build files from your CMakeLists.txt.

To generate Ninja build files, you can run the following command:

cmake -S . -B build -G Ninja
This command will configure your project using CMake with the -G option specifying the Ninja generator. -S specifies the source directory, and -B specifies the build directory.

Once the Ninja build files have been generated, you can build your project using the ninja command:

ninja -C build
This command will build your project using the generated Ninja build files in the build directory.

And that's a brief introduction to writing CMakeLists.txt and using Ninja for building C++ projects. There's a lot more to learn, but this should give you a good starting point!
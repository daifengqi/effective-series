# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cescqi/FactorQuant/effective-series/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp.dir/flags.make

CMakeFiles/cpp.dir/main.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/main.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/main.cpp

CMakeFiles/cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/main.cpp > CMakeFiles/cpp.dir/main.cpp.i

CMakeFiles/cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/main.cpp -o CMakeFiles/cpp.dir/main.cpp.s

CMakeFiles/cpp.dir/i3.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i3.cpp.o: ../i3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp.dir/i3.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i3.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i3.cpp

CMakeFiles/cpp.dir/i3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i3.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i3.cpp > CMakeFiles/cpp.dir/i3.cpp.i

CMakeFiles/cpp.dir/i3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i3.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i3.cpp -o CMakeFiles/cpp.dir/i3.cpp.s

CMakeFiles/cpp.dir/i3extend.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i3extend.cpp.o: ../i3extend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpp.dir/i3extend.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i3extend.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i3extend.cpp

CMakeFiles/cpp.dir/i3extend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i3extend.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i3extend.cpp > CMakeFiles/cpp.dir/i3extend.cpp.i

CMakeFiles/cpp.dir/i3extend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i3extend.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i3extend.cpp -o CMakeFiles/cpp.dir/i3extend.cpp.s

CMakeFiles/cpp.dir/i4.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i4.cpp.o: ../i4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpp.dir/i4.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i4.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i4.cpp

CMakeFiles/cpp.dir/i4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i4.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i4.cpp > CMakeFiles/cpp.dir/i4.cpp.i

CMakeFiles/cpp.dir/i4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i4.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i4.cpp -o CMakeFiles/cpp.dir/i4.cpp.s

CMakeFiles/cpp.dir/i5.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i5.cpp.o: ../i5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpp.dir/i5.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i5.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i5.cpp

CMakeFiles/cpp.dir/i5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i5.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i5.cpp > CMakeFiles/cpp.dir/i5.cpp.i

CMakeFiles/cpp.dir/i5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i5.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i5.cpp -o CMakeFiles/cpp.dir/i5.cpp.s

CMakeFiles/cpp.dir/i6.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i6.cpp.o: ../i6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cpp.dir/i6.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i6.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i6.cpp

CMakeFiles/cpp.dir/i6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i6.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i6.cpp > CMakeFiles/cpp.dir/i6.cpp.i

CMakeFiles/cpp.dir/i6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i6.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i6.cpp -o CMakeFiles/cpp.dir/i6.cpp.s

CMakeFiles/cpp.dir/i5extend.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/i5extend.cpp.o: ../i5extend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cpp.dir/i5extend.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/i5extend.cpp.o -c /Users/cescqi/FactorQuant/effective-series/cpp/i5extend.cpp

CMakeFiles/cpp.dir/i5extend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/i5extend.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cescqi/FactorQuant/effective-series/cpp/i5extend.cpp > CMakeFiles/cpp.dir/i5extend.cpp.i

CMakeFiles/cpp.dir/i5extend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/i5extend.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cescqi/FactorQuant/effective-series/cpp/i5extend.cpp -o CMakeFiles/cpp.dir/i5extend.cpp.s

# Object files for target cpp
cpp_OBJECTS = \
"CMakeFiles/cpp.dir/main.cpp.o" \
"CMakeFiles/cpp.dir/i3.cpp.o" \
"CMakeFiles/cpp.dir/i3extend.cpp.o" \
"CMakeFiles/cpp.dir/i4.cpp.o" \
"CMakeFiles/cpp.dir/i5.cpp.o" \
"CMakeFiles/cpp.dir/i6.cpp.o" \
"CMakeFiles/cpp.dir/i5extend.cpp.o"

# External object files for target cpp
cpp_EXTERNAL_OBJECTS =

cpp: CMakeFiles/cpp.dir/main.cpp.o
cpp: CMakeFiles/cpp.dir/i3.cpp.o
cpp: CMakeFiles/cpp.dir/i3extend.cpp.o
cpp: CMakeFiles/cpp.dir/i4.cpp.o
cpp: CMakeFiles/cpp.dir/i5.cpp.o
cpp: CMakeFiles/cpp.dir/i6.cpp.o
cpp: CMakeFiles/cpp.dir/i5extend.cpp.o
cpp: CMakeFiles/cpp.dir/build.make
cpp: CMakeFiles/cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp.dir/build: cpp
.PHONY : CMakeFiles/cpp.dir/build

CMakeFiles/cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp.dir/clean

CMakeFiles/cpp.dir/depend:
	cd /Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cescqi/FactorQuant/effective-series/cpp /Users/cescqi/FactorQuant/effective-series/cpp /Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug /Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug /Users/cescqi/FactorQuant/effective-series/cpp/cmake-build-debug/CMakeFiles/cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp.dir/depend


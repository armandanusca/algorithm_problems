# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anuscaarmand/CLionProjects/cuc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cuc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cuc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cuc.dir/flags.make

CMakeFiles/cuc.dir/main.cpp.o: CMakeFiles/cuc.dir/flags.make
CMakeFiles/cuc.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cuc.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cuc.dir/main.cpp.o -c /Users/anuscaarmand/CLionProjects/cuc/main.cpp

CMakeFiles/cuc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cuc.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anuscaarmand/CLionProjects/cuc/main.cpp > CMakeFiles/cuc.dir/main.cpp.i

CMakeFiles/cuc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cuc.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anuscaarmand/CLionProjects/cuc/main.cpp -o CMakeFiles/cuc.dir/main.cpp.s

CMakeFiles/cuc.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cuc.dir/main.cpp.o.requires

CMakeFiles/cuc.dir/main.cpp.o.provides: CMakeFiles/cuc.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cuc.dir/build.make CMakeFiles/cuc.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cuc.dir/main.cpp.o.provides

CMakeFiles/cuc.dir/main.cpp.o.provides.build: CMakeFiles/cuc.dir/main.cpp.o


# Object files for target cuc
cuc_OBJECTS = \
"CMakeFiles/cuc.dir/main.cpp.o"

# External object files for target cuc
cuc_EXTERNAL_OBJECTS =

cuc: CMakeFiles/cuc.dir/main.cpp.o
cuc: CMakeFiles/cuc.dir/build.make
cuc: CMakeFiles/cuc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cuc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cuc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cuc.dir/build: cuc

.PHONY : CMakeFiles/cuc.dir/build

CMakeFiles/cuc.dir/requires: CMakeFiles/cuc.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cuc.dir/requires

CMakeFiles/cuc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cuc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cuc.dir/clean

CMakeFiles/cuc.dir/depend:
	cd /Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anuscaarmand/CLionProjects/cuc /Users/anuscaarmand/CLionProjects/cuc /Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug /Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug /Users/anuscaarmand/CLionProjects/cuc/cmake-build-debug/CMakeFiles/cuc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cuc.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/anuscaarmand/CLionProjects/subsecvente

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/subsecvente.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/subsecvente.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subsecvente.dir/flags.make

CMakeFiles/subsecvente.dir/main.cpp.o: CMakeFiles/subsecvente.dir/flags.make
CMakeFiles/subsecvente.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subsecvente.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/subsecvente.dir/main.cpp.o -c /Users/anuscaarmand/CLionProjects/subsecvente/main.cpp

CMakeFiles/subsecvente.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subsecvente.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anuscaarmand/CLionProjects/subsecvente/main.cpp > CMakeFiles/subsecvente.dir/main.cpp.i

CMakeFiles/subsecvente.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subsecvente.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anuscaarmand/CLionProjects/subsecvente/main.cpp -o CMakeFiles/subsecvente.dir/main.cpp.s

CMakeFiles/subsecvente.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/subsecvente.dir/main.cpp.o.requires

CMakeFiles/subsecvente.dir/main.cpp.o.provides: CMakeFiles/subsecvente.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/subsecvente.dir/build.make CMakeFiles/subsecvente.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/subsecvente.dir/main.cpp.o.provides

CMakeFiles/subsecvente.dir/main.cpp.o.provides.build: CMakeFiles/subsecvente.dir/main.cpp.o


# Object files for target subsecvente
subsecvente_OBJECTS = \
"CMakeFiles/subsecvente.dir/main.cpp.o"

# External object files for target subsecvente
subsecvente_EXTERNAL_OBJECTS =

subsecvente: CMakeFiles/subsecvente.dir/main.cpp.o
subsecvente: CMakeFiles/subsecvente.dir/build.make
subsecvente: CMakeFiles/subsecvente.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable subsecvente"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/subsecvente.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subsecvente.dir/build: subsecvente

.PHONY : CMakeFiles/subsecvente.dir/build

CMakeFiles/subsecvente.dir/requires: CMakeFiles/subsecvente.dir/main.cpp.o.requires

.PHONY : CMakeFiles/subsecvente.dir/requires

CMakeFiles/subsecvente.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/subsecvente.dir/cmake_clean.cmake
.PHONY : CMakeFiles/subsecvente.dir/clean

CMakeFiles/subsecvente.dir/depend:
	cd /Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anuscaarmand/CLionProjects/subsecvente /Users/anuscaarmand/CLionProjects/subsecvente /Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug /Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug /Users/anuscaarmand/CLionProjects/subsecvente/cmake-build-debug/CMakeFiles/subsecvente.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subsecvente.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\secondBuildProtobuf

# Include any dependencies generated for this target.
include CMakeFiles/protoc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/protoc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/protoc.dir/flags.make

CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj: CMakeFiles/protoc.dir/flags.make
CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj: CMakeFiles/protoc.dir/includes_CXX.rsp
CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj: E:/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\secondBuildProtobuf\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj"
	D:\Qt\Qt5.9.9\Tools\mingw530_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\protoc.dir\E_\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc.obj -c E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc

CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.i"
	D:\Qt\Qt5.9.9\Tools\mingw530_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc > CMakeFiles\protoc.dir\E_\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc.i

CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.s"
	D:\Qt\Qt5.9.9\Tools\mingw530_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc -o CMakeFiles\protoc.dir\E_\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\src\google\protobuf\compiler\main.cc.s

# Object files for target protoc
protoc_OBJECTS = \
"CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj"

# External object files for target protoc
protoc_EXTERNAL_OBJECTS =

protoc.exe: CMakeFiles/protoc.dir/E_/Downloads/protobuf-cpp-3.12.3/protobuf-3.12.3/src/google/protobuf/compiler/main.cc.obj
protoc.exe: CMakeFiles/protoc.dir/build.make
protoc.exe: libprotoc.dll.a
protoc.exe: libprotobuf.dll.a
protoc.exe: CMakeFiles/protoc.dir/linklibs.rsp
protoc.exe: CMakeFiles/protoc.dir/objects1.rsp
protoc.exe: CMakeFiles/protoc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\secondBuildProtobuf\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable protoc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\protoc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/protoc.dir/build: protoc.exe

.PHONY : CMakeFiles/protoc.dir/build

CMakeFiles/protoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\protoc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/protoc.dir/clean

CMakeFiles/protoc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\cmake E:\Downloads\protobuf-cpp-3.12.3\protobuf-3.12.3\cmake D:\secondBuildProtobuf D:\secondBuildProtobuf D:\secondBuildProtobuf\CMakeFiles\protoc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/protoc.dir/depend


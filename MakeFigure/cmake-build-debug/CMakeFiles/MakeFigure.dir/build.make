# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\thelo\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\thelo\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\Programming\C++\Code\Caso4\MakeFigure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MakeFigure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MakeFigure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MakeFigure.dir/flags.make

CMakeFiles/MakeFigure.dir/main.cpp.obj: CMakeFiles/MakeFigure.dir/flags.make
CMakeFiles/MakeFigure.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MakeFigure.dir/main.cpp.obj"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MakeFigure.dir\main.cpp.obj -c H:\Programming\C++\Code\Caso4\MakeFigure\main.cpp

CMakeFiles/MakeFigure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MakeFigure.dir/main.cpp.i"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Programming\C++\Code\Caso4\MakeFigure\main.cpp > CMakeFiles\MakeFigure.dir\main.cpp.i

CMakeFiles/MakeFigure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MakeFigure.dir/main.cpp.s"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Programming\C++\Code\Caso4\MakeFigure\main.cpp -o CMakeFiles\MakeFigure.dir\main.cpp.s

CMakeFiles/MakeFigure.dir/Pattern.cpp.obj: CMakeFiles/MakeFigure.dir/flags.make
CMakeFiles/MakeFigure.dir/Pattern.cpp.obj: ../Pattern.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MakeFigure.dir/Pattern.cpp.obj"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MakeFigure.dir\Pattern.cpp.obj -c H:\Programming\C++\Code\Caso4\MakeFigure\Pattern.cpp

CMakeFiles/MakeFigure.dir/Pattern.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MakeFigure.dir/Pattern.cpp.i"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Programming\C++\Code\Caso4\MakeFigure\Pattern.cpp > CMakeFiles\MakeFigure.dir\Pattern.cpp.i

CMakeFiles/MakeFigure.dir/Pattern.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MakeFigure.dir/Pattern.cpp.s"
	H:\Programming\C++\Source\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Programming\C++\Code\Caso4\MakeFigure\Pattern.cpp -o CMakeFiles\MakeFigure.dir\Pattern.cpp.s

# Object files for target MakeFigure
MakeFigure_OBJECTS = \
"CMakeFiles/MakeFigure.dir/main.cpp.obj" \
"CMakeFiles/MakeFigure.dir/Pattern.cpp.obj"

# External object files for target MakeFigure
MakeFigure_EXTERNAL_OBJECTS =

MakeFigure.exe: CMakeFiles/MakeFigure.dir/main.cpp.obj
MakeFigure.exe: CMakeFiles/MakeFigure.dir/Pattern.cpp.obj
MakeFigure.exe: CMakeFiles/MakeFigure.dir/build.make
MakeFigure.exe: CMakeFiles/MakeFigure.dir/linklibs.rsp
MakeFigure.exe: CMakeFiles/MakeFigure.dir/objects1.rsp
MakeFigure.exe: CMakeFiles/MakeFigure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MakeFigure.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MakeFigure.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MakeFigure.dir/build: MakeFigure.exe

.PHONY : CMakeFiles/MakeFigure.dir/build

CMakeFiles/MakeFigure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MakeFigure.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MakeFigure.dir/clean

CMakeFiles/MakeFigure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\Programming\C++\Code\Caso4\MakeFigure H:\Programming\C++\Code\Caso4\MakeFigure H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug H:\Programming\C++\Code\Caso4\MakeFigure\cmake-build-debug\CMakeFiles\MakeFigure.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MakeFigure.dir/depend


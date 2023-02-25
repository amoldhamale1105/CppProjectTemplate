# C++ Base Project Template
Thinking of starting a brand new C++ project from scratch? Look no further than this template!  
This is a sample C++ project setup that can be used as a template to start a new project in Linux enviroment  
This project template uses the **cmake** build system to build and generate artifacts  
This template can be used to genrate executable binaries or shared libraries to be linked with other applications    

# Project Setup with template
Replace the sample files (`App.hpp` and `App.cpp`) with your own header and source files  
Make sure you have all your application headers inside `include/` directory and source files in `src/` directory  
Finally set up your own `main()` function by including necessary headers in `main.cpp`  
Add your headers in `CMakeLists.txt` under the `INCLUDES` variable  
Add your sources in `CMakeLists.txt` under the `SOURCES` variable   

If you're new to C++ or cmake build system, carefully observe placement of sample files in the directory structure of template project and `CMakeLists.txt` with reference to above instructions

# Build instructions
If you're intending to create a shared library, uncomment the `add_library()` call and comment out the `add_executable()` call in `CMakeLists.txt`  
The project can be built using the `build.sh` script in the source tree. It can be run without any options for default build configuration. Defaults for each option will appear in `{}` in the usage instruction after running the following command from the project source  
```
./build.sh -h
```
As an example, if you want to use the script to build for release mode with `Unix Makefiles` cmake generator, the script can be executed as follows  
```
./build.sh -a -r -g "Unix Makefiles"
```
Build artifacts will be generated in the `build` directory on a successful configuration  
Output artifacts will be present in either the `bin` or `lib` directory depending on whether cmake has been setup to build an executable or a shared library  
In case you wish to set up the build script to handle external dependencies, refer to the build script of https://github.com/amoldhamale1105/ShoppingCart

## Output and Testing
If you intended to generate an executable, run the binary/executable from the `bin` directory to launch.  
The sample program in the template can take in an optional string name argument as follows:
```
./bin/BaseProject Amol
```
Alternatively you can run the program without any argument and enter your name when prompted  
The console will then print a random greeting for entered username and exit  

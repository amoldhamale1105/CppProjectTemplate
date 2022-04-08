# SampleProject
A sample project with cmake build system  
This project can be used a template to set up a new C++ project  
Simply replace the Sample files with your own include and source files  
Finally set up your own main function for the project in `main.cpp`

## Build instructions
Using VSCode, reconfigure the project. Build it using "rebuild all"  
If you're a command line fan, create a `build` dir and execute the following commands from the `build` dir
```
cmake ..
make
```
Build files will be generated in the `build` directory
The executable will be generated in the `bin` directory on a successful build

Run the binary/executable from the `bin` directory to launch.

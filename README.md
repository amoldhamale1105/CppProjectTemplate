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

### Special instructions for data structures test branch
If you're using the custom data structures test branch, please clone the `CustomDataStructures` public repository (https://github.com/amoldhamale1105/CustomDataStructures.git) under a directory called `Projects` under /home/$USER  
This enables cmake to locate the include and lib paths containing implemetation of custom data structures  
For instance, the directory path can be as follows (`$USER` env var will pick up the currently logged in user on Linux)  
```
/home/$USER/Projects/CustomDataStructures
```
Alternatively, you can modify the existing cmake to the path of your choice

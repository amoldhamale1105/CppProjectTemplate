#include <iostream>
#include <Sample.hpp>

int global_var = 20;

int main(int argc, char** argv)
{
	int a = 10;
	int *p = &a;
	std::cout<<"Hello! Playing with pointer references"<<std::endl;
	std::cout<<"pointer value: "<<p<<std::endl;
	modify_value(p);
	std::cout<<"pointer value after func call: "<<p<<std::endl;
	std::cout<<"value held by pointer: "<<*p<<std::endl;

    return 0;
}
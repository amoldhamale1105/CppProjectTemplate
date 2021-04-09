#include<iostream>

int global_var = 20;

void modify_value(int*&);

int main()
{
	int a = 10;
	int *p = &a;
	std::cout<<"Hello! Playing with pointer references"<<std::endl;
	std::cout<<"pointer value: "<<p<<std::endl;
	modify_value(p);
	std::cout<<"pointer value after func call: "<<p<<std::endl;
	std::cout<<"value held by pointer: "<<*p<<std::endl;
}

void modify_value(int*& ptr)
{
	std::cout<<"ptr value: "<<ptr<<std::endl;
	std::cout<<"value held by ptr before assignment: "<<*ptr<<std::endl;
	ptr = &global_var;
	std::cout<<"ptr value after assignment: "<<ptr<<std::endl;
	std::cout<<"value held by ptr: "<<*ptr<<std::endl;
}

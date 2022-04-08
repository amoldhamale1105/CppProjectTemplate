#include <iostream>
#include <Sample.hpp>
#include <Vector.hpp>

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

	Vector test(8, 3);
	std::cout<<test.capacity()<<test.size()<<std::endl;
	test.push_back(9);
	test.push_back(32);
	test.push_back(76);
	test.push_back(21);
	test.push_back(51);
	std::cout<<test.pop_back()<<std::endl;

	for(int i = 0; i < test.size(); ++i)
	{
		std::cout<<test.at(i)<<" ";
	}
	std::cout<<std::endl;
	std::cout<<test.capacity()<<test.size()<<std::endl;

    return 0;
}
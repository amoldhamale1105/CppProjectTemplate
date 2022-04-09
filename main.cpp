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

	Vector<int> test(8, 3);
	std::cout<<test.capacity()<<test.size()<<std::endl;
	test.push_back(9);
	test.push_back(32);
	test.push_back(76);
	test.push_back(21);
	test.push_back(51);
	std::cout<<test.pop_back()<<std::endl;

	Vector<int> test2(5);

	test2.push_back(1);
	test2.push_back(2);
	test2.push_back(3);
	test2.push_back(4);
	test2.push_back(5);
	test2.push_back(6);

	test2.pop_back();
	std::cout<<test2.front()<<std::endl;
	std::cout<<test2.back()<<std::endl;

	for(int i = 0; i < test.size(); ++i)
	{
		std::cout<<test[i]<<" ";
	}

	for(int i = 0; i < test2.size(); ++i)
	{
		std::cout<<test2[i]<<" ";
	}
	std::cout<<std::endl;
	std::cout<<test.capacity()<<test.size()<<std::endl;
	std::cout<<test2.capacity()<<test2.size()<<std::endl;

    return 0;
}
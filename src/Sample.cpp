#include <Sample.hpp>

static int global_var = 20;

void modify_value(int*& ptr)
{
	std::cout<<"ptr value: "<<ptr<<std::endl;
	std::cout<<"value held by ptr before assignment: "<<*ptr<<std::endl;
	ptr = &global_var;
	std::cout<<"ptr value after assignment: "<<ptr<<std::endl;
	std::cout<<"value held by ptr: "<<*ptr<<std::endl;
}

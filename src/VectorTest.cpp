#include <VectorTest.hpp>

static int global_var = 20;

void basicVectorTest()
{
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

}
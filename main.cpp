#include <iostream>
#include <VectorTest.hpp>
#include <ListTest.hpp>
#include <StackTest.hpp>
#include <QueueTest.hpp>

#define UNUSED(x) (void)(x)

int main(int argc, char** argv)
{
	UNUSED(argc);
	UNUSED(argv);
	basicVectorTest();
	basicListTest();
	basicStackTest();
	basicQueueTest();
	return 0;
}
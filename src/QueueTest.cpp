#include <QueueTest.hpp>

void basicQueueTest()
{
    std::cout<<"--------------starting Queue test-----------------"<<std::endl;
    
    Queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.pop();
    que.push(4);
    que.push(5);
    que.pop();
    que.push(6);
    que.push(7);
    que.push(8);

    Queue<int> que2(4);
    que2 = que;

    que.reverse();

    while (!que.isEmpty())
    {
        std::cout<<que.pop()<<" ";
    }
    std::cout<<std::endl;
    while (!que2.isEmpty())
    {
        std::cout<<que2.pop()<<" ";
    }
    std::cout<<std::endl;
    
    std::cout<<"--------------ending Queue test-----------------\n"<<std::endl;
}
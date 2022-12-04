#include "HeapTest.hpp"

void basicHeapTest()
{
    std::cout<<"--------------starting Heap test-----------------"<<std::endl;
    Heap<int, std::greater<int>> pq(5);
    pq.push(30);
    pq.push(23);
    pq.push(12);
    pq.push(15);
    pq.push(29);
    pq.push(77);
    pq.pop();
    pq.push(13);

    for(auto i = 0; i < pq.size(); ++i)
    {
        std::cout<<pq[i]<<" ";
    }

    std::cout<<"topmost element: "<<pq.top()<<std::endl;
    pq.pop();
    for(auto i = 0; i < pq.size(); ++i)
    {
        std::cout<<pq[i]<<" ";
    }
    
    std::cout<<"topmost element: "<<pq.pop()<<std::endl;
    for(auto i = 0; i < pq.size(); ++i)
    {
        std::cout<<pq[i]<<" ";
    }
    std::cout<<"empty? "<<(pq.isEmpty() ? "yes" : "no")<<std::endl;

    Heap<int, std::greater<int>> copyPq /*= pq*/;
    copyPq = pq;
    copyPq.push(13);
    copyPq.push(18);
    
    std::cout<<"popping all..."<<std::endl;
    while (!pq.isEmpty())
    {
        std::cout<<pq.pop()<<" ";
    }
    std::cout<<"empty? "<<(pq.isEmpty() ? "yes" : "no")<<std::endl;
    std::cout<<"topmost element: "<<pq.pop()<<std::endl;

    std::cout<<"popping all from copy..."<<std::endl;
    while (!copyPq.isEmpty())
    {
        std::cout<<copyPq.pop()<<" ";
    }
    std::cout<<"copy empty? "<<(copyPq.isEmpty() ? "yes" : "no")<<std::endl;

    Heap<std::string> strpq;
    strpq.push("Not");
    strpq.push("sure");
    strpq.push("how");
    strpq.push("this");
    strpq.push("will");
    strpq.push("be");
    strpq.push("heaped");

    for(auto i = 0; i < strpq.size(); ++i)
    {
        std::cout<<strpq[i]<<" ";
    }

    std::cout<<"topmost element: "<<strpq.top()<<std::endl;
    strpq.pop();
    for(auto i = 0; i < strpq.size(); ++i)
    {
        std::cout<<strpq[i]<<" ";
    }
    
    std::cout<<"topmost element: "<<strpq.pop()<<std::endl;
    for(auto i = 0; i < strpq.size(); ++i)
    {
        std::cout<<strpq[i]<<" ";
    }
    std::cout<<"empty? "<<(strpq.isEmpty() ? "yes" : "no")<<std::endl;
    std::cout<<"popping all..."<<std::endl;
    while (!strpq.isEmpty())
    {
        std::cout<<strpq.pop()<<" ";
    }
    std::cout<<"empty? "<<(strpq.isEmpty() ? "yes" : "no")<<std::endl;
    std::cout<<"topmost element: "<<strpq.pop()<<std::endl;

    std::cout<<"--------------ending Heap test-----------------\n"<<std::endl;
}
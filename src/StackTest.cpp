#include <StackTest.hpp>

void basicStackTest()
{
    std::cout<<"--------------starting Stack test-----------------"<<std::endl;
    Stack<std::string> books;

    books.push("C++");
    books.push("Java");
    books.push("Poor Economics");
    books.push("Kite Runner");
    
    std::cout<<"Popped book: "<<books.pop()<<std::endl;
    std::cout<<"Topmost book: "<<books.top()<<std::endl;
    books.push("Sapiens");
    std::cout<<"Topmost book: "<<books.top()<<std::endl;

    books.clear();
    std::cout<<"Topmost book: "<<books.top()<<std::endl;

    std::cout<<"--------------starting Stack test-----------------"<<std::endl;
}
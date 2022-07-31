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

    Stack<std::string> moreBooks = books;
    moreBooks.push("Blueprint");
    while (!moreBooks.isEmpty())
    {
        std::cout<<moreBooks.pop()<<" ";
    }
    std::cout<<std::endl;
    std::cout<<books.top()<<" "<<moreBooks.isEmpty()<<std::endl;

    books.clear();
    std::cout<<"Topmost book: "<<books.top()<<std::endl;

    struct Dict
    {
        const char* key;
        uint16_t value;
    };

    Stack<Dict> myDict;
    myDict.push({"red", 0});
    myDict.push({"green", 1});
    myDict.push({"blue", 2});

    Stack<Dict> copyDict;
    copyDict = myDict;

    while (!myDict.isEmpty())
    {
        Dict instance = myDict.pop();
        std::cout<<instance.key<<" "<<instance.value<<",";
    }
    std::cout<<std::endl;

    copyDict.push({"alpha", 3});
    while (!copyDict.isEmpty())
    {
        Dict instance = copyDict.pop();
        std::cout<<instance.key<<" "<<instance.value<<",";
    }
    std::cout<<std::endl;
    
    std::cout<<"--------------ending Stack test-----------------\n"<<std::endl;
}
#include <ListTest.hpp>

void basicListTest()
{
    std::cout<<"--------------starting List test-----------------"<<std::endl;
    List<int> myList;
    myList.push_front(7);
    myList.push_front(65);
    myList.push_back(33);
    int a = 52;
    myList.push_back(a); //lvalue test
    myList.push_front(a); //lvalue test

    Vector<int> elementList = myList.get_list();
    for(auto i = 0; i < elementList.size(); ++i)
    {
        std::cout<<elementList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;
    std::cout<<"--------------ending List test-----------------\n"<<std::endl;
    
}
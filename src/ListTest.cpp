#include <ListTest.hpp>

void basicListTest()
{
    std::cout<<"--------------starting List test-----------------"<<std::endl;
    List<int> myList;
    myList.push_front(7);
    myList.push_front(65);
    myList.push_back(33);
    int a{52}, b{74};
    myList.push_back(a); //lvalue test
    myList.push_front(b); //lvalue test

    Vector<int> elementList = myList.get_list();
    for(auto i = 0; i < elementList.size(); ++i)
    {
        std::cout<<elementList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;

    List<std::string> strList;
    strList.push_back("friends");
    strList.push_back("pee");
    strList.push_back("lo");
    strList.push_front("hello");
    std::string insertionStr("chai");
    strList.insert(insertionStr, 2);

    Vector<std::string> stringList = strList.get_list();
    for(auto i = 0; i < stringList.size(); ++i)
    {
        std::cout<<stringList[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<myList.find(3)<<std::endl;
    std::cout<<strList.position("lo")<<std::endl;
    std::cout<<strList.position("randomString")<<std::endl;
    std::cout<<myList.find(-44)<<std::endl;
    std::cout<<myList.find(133)<<std::endl;
    std::cout<<myList.recursive_search(7)<<std::endl;
    std::cout<<myList.recursive_search(54)<<std::endl;
    std::cout<<strList.recursive_search("pee")<<std::endl;

    std::cout<<"--------------ending List test-----------------\n"<<std::endl;
    
}
#include <ListTest.hpp>

void basicListTest()
{
    std::cout<<"--------------starting List test-----------------"<<std::endl;
    List<int> myList;
    myList.push_front(7);
    myList.push_front(65);
    myList.push_back(33);
    myList.push_back(19);
    int a{52}, b{74};
    myList.push_back(a); //lvalue test
    myList.push_front(b); //lvalue test
    myList.push_front(5);

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
    strList.push_back("jaldi");
    strList.push_front("surrrr");

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

    myList.remove(2);
    myList.remove(100);
    Vector<int> modifiedList = myList.get_list();
    for(auto i = 0; i < modifiedList.size(); ++i)
    {
        std::cout<<modifiedList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;

    strList.remove(-21);
    Vector<std::string> modifiedStringList = strList.get_list();
    for(auto i = 0; i < modifiedStringList.size(); ++i)
    {
        std::cout<<modifiedStringList[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"front popped value in int list: "<<myList.pop_front()<<std::endl;
    std::cout<<"front popped value in string list: "<<strList.pop_front()<<std::endl;
    std::cout<<"back popped value in int list: "<<myList.pop_back()<<std::endl;
    std::cout<<"back popped value in string list: "<<strList.pop_back()<<std::endl;
    Vector<int> newList = myList.get_list();
    for(auto i = 0; i < newList.size(); ++i)
    {
        std::cout<<newList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;
    
    Vector<std::string> newStringList = strList.get_list();
    for(auto i = 0; i < newStringList.size(); ++i)
    {
        std::cout<<newStringList[i]<<" ";
    }
    std::cout<<std::endl;

    //Empty list tests
    List<char> charList;
    charList.remove(2);
    charList.insert('G', 5);
    charList.push_back('M');
    std::cout<<charList.pop_front()<<std::endl;

    std::cout<<"--------------ending List test-----------------\n"<<std::endl;
    
};
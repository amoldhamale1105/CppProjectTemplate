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

    Vector<int> elementList = myList.to_vector();
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

    for(auto i = 0; i < strList.size(); ++i)
    {
        std::cout<<strList[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"reversed..."<<std::endl;
    myList.reverse();
    strList.reverse();
    for(auto i = 0; i < myList.size(); ++i)
    {
        std::cout<<myList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;
    
    for(auto i = 0; i < strList.size(); ++i)
    {
        std::cout<<strList[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"reversed again to set them straight..."<<std::endl;
    myList.reverse();
    strList.reverse();

    std::cout<<myList.front()<<" "<<myList.back()<<std::endl;
    std::cout<<strList.front()<<" "<<strList.back()<<std::endl;
    myList[1] = 47;
    strList[3] = "coffee";

    for(auto i = 0; i < myList.size(); ++i)
    {
        std::cout<<myList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;

    for(auto i = 0; i < strList.size(); ++i)
    {
        std::cout<<strList[i]<<" ";
    }
    std::cout<<std::endl;

    strList[3] = "chai";
    std::cout<<strList.position("lo")<<std::endl;
    std::cout<<strList.position("randomString")<<std::endl;
    std::cout<<myList.at(-44)<<std::endl;
    std::cout<<myList.at(133)<<std::endl;
    std::cout<<myList.recursive_search(7)<<std::endl;
    std::cout<<myList.recursive_search(54)<<std::endl;
    std::cout<<strList.recursive_search("pee")<<std::endl;

    myList.remove(2);
    myList.remove(100);

    for(auto i = 0; i < myList.size(); ++i)
    {
        std::cout<<myList.at(i)<<"->";
    }
    std::cout<<"end of list"<<std::endl;

    strList.remove(-21);
    for(auto i = 0; i < strList.size(); ++i)
    {
        std::cout<<strList[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"front popped value in int list: "<<myList.pop_front()<<std::endl;
    std::cout<<"front popped value in string list: "<<strList.pop_front()<<std::endl;
    std::cout<<"back popped value in int list: "<<myList.pop_back()<<std::endl;
    std::cout<<"back popped value in string list: "<<strList.pop_back()<<std::endl;

    for(auto i = 0; i < myList.size(); ++i)
    {
        std::cout<<myList[i]<<"->";
    }
    std::cout<<"end of list"<<std::endl;
    
    for(auto i = 0; i < strList.size(); ++i)
    {
        std::cout<<strList.at(i)<<" ";
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
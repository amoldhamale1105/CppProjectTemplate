#include "HashmapTest.hpp"

void basicHashmapTest()
{
    std::cout<<"--------------starting Hashmap test-----------------"<<std::endl;
    Hashmap<std::string,int> myMap(53);
    myMap.insert("hello", 12);
    myMap.insert("friends", 13);
    myMap.insert("chai", 14);
    myMap.insert("pee", 15);
    myMap.insert("lo", 16);

    std::cout<<myMap["pee"]<<" "<<myMap.at("friends")<<std::endl;
    myMap["friends"] = 67;
    std::cout<<myMap.at("pee")<<" "<<myMap["friends"]<<std::endl;
    std::cout<<myMap.find(16)<<", is empty? "<<(myMap.isEmpty() ? "yes" : "no")<<std::endl;

    Vector<std::string> keys = myMap.keys();
    while (!keys.isEmpty())
    {
        std::cout<<keys.pop_back()<<",";
    }
    std::cout<<'\b'<<std::endl;
    

    std::cout<<"--------------ending Hashmap test-----------------\n"<<std::endl;
}
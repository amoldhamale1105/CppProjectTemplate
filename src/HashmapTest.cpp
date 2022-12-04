#include "HashmapTest.hpp"

void basicHashmapTest()
{
    std::cout<<"--------------starting Hashmap test-----------------"<<std::endl;
    Hashmap<std::string,int> myMap;
    myMap.insert("hello", 12);
    myMap.insert("friends", 13);
    myMap.insert("chai", 14);
    myMap.insert("pee", 15);
    myMap.insert("lo", 16);
    myMap.insert("kutte", 32);
    myMap.insert("kamine", 48);
    myMap.insert("tera", 21);
    myMap.insert("khoon", 66);
    myMap.insert("pee", 33);
    myMap.insert("jaunga", 11);
    myMap.insert("thik", 22);
    myMap.insert("hai", 99);

    std::cout<<myMap.size()<<std::endl;
    std::cout<<myMap["pee"]<<" "<<myMap.at("friends")<<std::endl;
    myMap["friends"] = 67;
    myMap["Seinfeld"] = 9;
    std::cout<<myMap.at("pee")<<" "<<myMap["friendz"]<<" "<<myMap.at("Seinfeld")<<std::endl;
    std::cout<<myMap.find(16)<<", is empty? "<<(myMap.isEmpty() ? "yes" : "no")<<" size:"<<myMap.size()<<std::endl;

    myMap.erase("spam8");
    myMap.erase("chai");

    std::cout<<myMap.contains("chai")<<" "<<myMap.contains("pee")<<" size:"<<myMap.size()<<std::endl;
    Hashmap<std::string,int> copyMap = myMap;
    myMap.clear();

    std::cout<<"my map empty? "<<(myMap.isEmpty() ? "yes" : "no")<<std::endl;
    std::cout<<"after copying... ";
    Vector<std::string> keys = copyMap.keys();
    while (!keys.isEmpty())
    {
        std::string key = keys.pop_back();
        std::cout<<key<<":"<<copyMap.at(key)<<", ";
    }
    std::cout<<'\b'<<std::endl;

    copyMap.erase("friendz");
    copyMap.erase("khoon");

    myMap = copyMap;

    std::cout<<"my map("<<myMap.size()<<"): ";
    keys = myMap.keys();
    while (!keys.isEmpty())
    {
        std::string key = keys.pop_back();
        std::cout<<key<<":"<<myMap.at(key)<<", ";
    }
    std::cout<<'\b'<<std::endl;

    copyMap.erase("Seinfeld");
    std::cout<<"copy map("<<copyMap.size()<<"): ";
    keys = copyMap.keys();
    while (!keys.isEmpty())
    {
        std::string key = keys.pop_back();
        std::cout<<key<<":"<<copyMap.at(key)<<", ";
    }
    std::cout<<'\b'<<std::endl;
    

    std::cout<<"--------------ending Hashmap test-----------------\n"<<std::endl;
}
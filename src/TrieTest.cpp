#include "TrieTest.hpp"

void basicTrieTest()
{
    std::cout<<"--------------starting Trie test-----------------"<<std::endl;
    std::string wordList[] = {"Rise", "Ripe", "Rice", "hello", "apple", "ape", "news"};
    Trie tr;
    for(auto i = 0; i < 7; i++)
    {
        tr.insert(wordList[i]);
    }

    std::cout<<"found Rise? "<<(tr.contains("Rise") ? "yes" : "no")<<std::endl;
    std::cout<<"found Ripe? "<<(tr.contains("Ripe") ? "yes" : "no")<<std::endl;
    std::cout<<"found new? "<<(tr.contains("new") ? "yes" : "no")<<std::endl;
    std::cout<<"found news? "<<(tr.contains("news") ? "yes" : "no")<<std::endl;
    std::cout<<"found hell? "<<(tr.contains("hell") ? "yes" : "no")<<std::endl;
    std::cout<<"found hello? "<<(tr.contains("hello") ? "yes" : "no")<<std::endl;
    std::cout<<"found ape? "<<(tr.contains("ape") ? "yes" : "no")<<std::endl;
    std::cout<<"found apes? "<<(tr.contains("apes") ? "yes" : "no")<<std::endl;

    std::cout<<"modifying and copying trie..."<<std::endl;
    Trie tr2 = tr;
    tr.remove("Ripe");
    tr2.insert("new");
    tr.insert("hell");
    tr2.remove("hello");
    tr2.remove("Ride");

    std::cout<<"found Rise? "<<(tr.contains("Rise") ? "yes" : "no")<<std::endl;
    std::cout<<"found Ripe? "<<(tr.contains("Ripe") ? "yes" : "no")<<std::endl;
    std::cout<<"found new? "<<(tr.contains("new") ? "yes" : "no")<<std::endl;
    std::cout<<"found news? "<<(tr.contains("news") ? "yes" : "no")<<std::endl;
    std::cout<<"found hell? "<<(tr.contains("hell") ? "yes" : "no")<<std::endl;
    std::cout<<"found hello? "<<(tr.contains("hello") ? "yes" : "no")<<std::endl;
    std::cout<<"found ape? "<<(tr.contains("ape") ? "yes" : "no")<<std::endl;
    std::cout<<"found apes? "<<(tr.contains("apes") ? "yes" : "no")<<std::endl;

    std::cout<<"copied map contents..."<<std::endl;
    std::cout<<"found Rise? "<<(tr2.contains("Rise") ? "yes" : "no")<<std::endl;
    std::cout<<"found Ripe? "<<(tr2.contains("Ripe") ? "yes" : "no")<<std::endl;
    std::cout<<"found new? "<<(tr2.contains("new") ? "yes" : "no")<<std::endl;
    std::cout<<"found news? "<<(tr2.contains("news") ? "yes" : "no")<<std::endl;
    std::cout<<"found hell? "<<(tr2.contains("hell") ? "yes" : "no")<<std::endl;
    std::cout<<"found hello? "<<(tr2.contains("hello") ? "yes" : "no")<<std::endl;
    std::cout<<"found ape? "<<(tr2.contains("ape") ? "yes" : "no")<<std::endl;
    std::cout<<"found apes? "<<(tr2.contains("apes") ? "yes" : "no")<<std::endl;

    std::cout<<"--------------ending Trie test-----------------\n"<<std::endl;
}
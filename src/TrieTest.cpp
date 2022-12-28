#include "TrieTest.hpp"

void basicTrieTest()
{
    std::cout<<"--------------starting Trie test-----------------"<<std::endl;
    Trie tr;
    tr.insert("Rise");
    tr.insert("Ripe");
    tr.insert("and");
    tr.insert("fall");
    tr.insert("faint");

    std::cout<<"found Rise? "<<(tr.contains("Rise") ? "yes" : "no")<<std::endl;
    std::cout<<"found fa? "<<(tr.contains("fa") ? "yes" : "no")<<std::endl;
    std::cout<<"found fall? "<<(tr.contains("fall") ? "yes" : "no")<<std::endl;
    std::cout<<"found faints? "<<(tr.contains("faints") ? "yes" : "no")<<std::endl;

    std::cout<<"--------------ending Trie test-----------------\n"<<std::endl;
}
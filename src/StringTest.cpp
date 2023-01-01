#include "StringTest.hpp"

void basicStringTest()
{
    std::cout<<"--------------starting String test-----------------"<<std::endl;
    String str = "hey there";
    String name = "mo";
    String str1("My");
    String str2 = "nam";
    String str4 = "Steve";
    std::cout<<"before assign length: "<<str4.length()<<std::endl;
    str4 = name;
    std::cout<<"after assign length: "<<str4.length()<<std::endl;
    String str3 = str1;

    str4.reverse();
    str4.prepend('l');
    str4.reverse();

    String pal = "racecar";
    String org = pal;
    pal.reverse();
    std::cout<<"is "<<pal.data()<<" palindrome? "<<(org == pal ? "yes" : "no")<<std::endl;

    String concat = str1 + " " + str2 + " " + str3 + " " + str4;
    std::cout<<concat.c_str()<<std::endl;

    String mistake = "Oops, there are a few types";
    std::cout<<mistake<<std::endl;
    String corrected = std::move(mistake);

    corrected[25] = 'o';

    std::cout<<"moved str: "<<mistake<<" empty? "<<(mistake.empty() ? "yes" : "no")<<std::endl;
    std::cout<<"corrected str (length "<<corrected.length()<<"): "<<corrected<<std::endl;

    str2.append('e');
    str4.prepend('A');
    str3 = "is";

    concat = str1 + " " + str2 + " " + str3 + " " + str4;
    str += ',';
    str.append(' ');
    name.clear();
    std::cout<<"name empty? "<<(name.empty() ? "yes" : "no")<<std::endl;
    name = str;
    str += concat;
    std::cout<<name<<" + "<<concat<<" -> "<<str<<std::endl;

    std::cout<<"--------------ending String test-----------------\n"<<std::endl;
}
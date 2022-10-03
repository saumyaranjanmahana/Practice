#include<iostream>
#include<string>
//using namespace std;
int main()
{
    std::string first ;
    std::cout<<"Type your name: ";
    getline (std::cin,first);
    std::cout<<"Your Name is "<<first;
    return 0;
    }

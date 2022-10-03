#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first = "Saumya";
    string middle ="Ranjan";
    string last ="Mahana";
    string Name =first+" "+middle+" "+last;
    cout<<Name<<endl;
    string Nam=first.append(middle).append(last);
    cout<<Nam;
    return 0;
    }

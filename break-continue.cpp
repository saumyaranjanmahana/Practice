#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<20;i++)
    {
        if(i==4)
        {
            continue;
        }
        if(i==18)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}

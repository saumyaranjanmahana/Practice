#include<iostream>
using namespace std;
int main()
{
int x1=1,x2=1,x3=1,x4=1,x5=1 ;
x1<<=1;
cout<<"x<<=1: "<<x1<<endl;
x2>>=1;
cout<<"x>>=1: "<<x2<<endl;
x3&=1;
cout<<"x&=1: "<<x3<<endl;
x4|=1;
cout<<"x|=1: "<<x4<<endl;
x5^=1;
cout<<"x^=1: "<<x5<<endl;
return 0;
}

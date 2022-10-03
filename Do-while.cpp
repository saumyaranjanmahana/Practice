#include<iostream>
using namespace std;
int main()
{
    int i;
    int n=500;
    cout<<"Enter a number: ";
    cin>>i;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<n);
    return 0;
}

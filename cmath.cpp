#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double x,y,z;
  cout<<"enter a positive real number: ";//first number
  cin>>x;
  cout<<"Enter another positive number: ";//second number
  cin>>y;
  cout<<"Enter the third number:";//third number
  cin>>z;
  cout<<endl;
  cout<<"Following are the functions defined on the entered number:"<<endl;
  cout<<"Absolute value: "<<abs(x)<<endl;
  cout<<"arccosine: "<<acos(x)<<endl;
  cout<<"arcsine: "<<asin(x)<<endl;
  cout<<"arctangent: "<<atan(x)<<endl;
  cout<<"Cuberoot: "<<cbrt(x)<<endl;
  cout<<"Rounded: "<<ceil(x)<<"  "<<floor(x)<<endl;
  cout<<"Cosine: "<<cos(x)<<endl;
  cout<<"sine: "<<sin(x)<<endl;
  cout<<"cosine: "<<cos(x)<<endl;
  cout<<"tangent: "<<tan(x)<<endl;
  cout<<"Hyperbolic sine: "<<sinh(x)<<endl;
  cout<<"Hyberbolic cosine: "<<cosh(x)<<endl;
  cout<<"Hyperbolic tangent: "<<tanh(x)<<endl;
  cout<<"Exponential: "<<exp(x)<<endl;
  cout<<"less than exponential by one: "<<expm1(x)<<endl;
  cout<<"Absolute value of floating number: "<<fabs(x)<<endl;
  cout<<"Positive difference between the entered number: "<<fdim(x,y)<<endl;
  cout<<"Square root of the squared two numbers: "<<hypot(x,y)<<endl;
  cout<<"Highest value of floating number: "<<fmax(x,y)<<endl;
  cout<<"Minimum value of floating number: "<<fmin(x,y)<<endl;
  cout<<"Floating point remainder of 1st/2nd: "<<fmod(x,y)<<endl;
  cout<<"1st to the power 2nd: "<<pow(x,y)<<endl;
  cout<<"1st*2nd+3rd: "<<fma(x,y,z);
  return 0;

}


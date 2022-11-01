
//Program to find Area and Circumference of a circle given the radius

#include<iostream>
using namespace std;
#define pi 3.142
// pi is symbolic constant
int main()
{
   float r;
   cout<<"Enter the radius of the circle :";
   cin>>r;
   cout<<"Area :"<<pi*r*r<<"\nCircumference :"<<2*pi*r;
  return 0;
}

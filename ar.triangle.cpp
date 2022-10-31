// Program to find the area of  atriangle given 3 sides.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c, s, area;
    cout<<"Enter the sides ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area :"<<area;
    return 0;
}
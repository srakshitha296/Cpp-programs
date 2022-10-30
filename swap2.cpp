// Program to swap 2 numbers without using temporary variable.

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
     cout<<"a="<<a<<"\tb="<<b;
    return 0;
}

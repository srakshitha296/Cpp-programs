// Program to swap 2 numbers using temporary variable.
#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;
    temp=a;a=b;b=temp;
    cout<<"a="<<a<<"\tb="<<b;
    return 0;
}
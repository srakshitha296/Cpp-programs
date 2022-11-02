//program to calculate discount 

#include<iostream>
using namespace std;
int main()
{
    float amt, discount=0, minamt, perc;
    
    cout<<"Enter the purchased amount : ";
    cin>>amt;
    cout<<"Enter the minimum purchasing amount :";
    cin>>minamt;
    cout<<"Enter the discount % :";
    cin>>perc;

   if(amt>=minamt)
   discount=amt*perc/100;

  cout<<"Purchased amount :"<<amt<<endl;
  cout<<"Discount :"<<discount<<endl;
  cout<<"Net amount :"<<amt-discount;

  return 0;
}
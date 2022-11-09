#include<iostream>
using namespace std;
int main() 
{
int sum=0, a[50], i, n;
 cout<<"Enter the value of n\n";   
 cin>>n;
 cout<<"Enter n numbers\n";
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
   sum+=a[i];
}
cout<<"Average : "<<sum/n;
return 0;
}
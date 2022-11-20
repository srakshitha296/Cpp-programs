#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
 cout<<"Enter the value of N\n";
  cin>>n;
  for(i=1;i<=n;i++)
    {
      cout<<"\n";
      for(j=1;j<=i;j++)
        {
          cout<<"*";
        }
    }
}
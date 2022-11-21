#include<iostream>
using namespace std;
 int main()
{
    int n, i, fib[100];
    cout<<"ENTER A NUMBER WHOSE FIBONACCI SERIES HAS TO BE GENERATED\n";
    cin>>n;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
      fib[i]=(fib[i-1]+fib[i-2]);
    }
    cout<<"Fibonacci series of "<<n<<": " ;
    for(i=0;i<=n;i++)
    {
      cout<<fib[i]<<"\t";
    }
}
  

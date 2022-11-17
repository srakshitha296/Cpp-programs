#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cout<<"Enter 4 numbers\n";
   cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
   cout<<ans<<" is largest.";
    
    return 0;}
int max_of_four(int a, int b, int c, int d)
{
    int large;
    large=(a>b?(a>c?a:c):(b>c?b:c));
    large=(large>d?large:d);
    return(large);
    
}
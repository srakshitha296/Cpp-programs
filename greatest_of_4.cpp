#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
 
 int max_of_four(int a, int b, int c, int d)
 {
    int big;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            big=a;
            else 
            big=d;
            
        }
        else
        {
            if(c>d)
            big=c;
            else 
            big=d;
            
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            big=b;
            else 
            big=d;
        }
        else 
        {
        if(c>d)
        big=c;
        else 
        big=d;
        
        }
    }
     return big;
 }
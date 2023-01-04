#include <iostream>

using namespace std;

int test(int n)
        {
            const int x = 51;

            if (n > x)
            {
                return (n - x)*3;
            }
            return x - n;
        }
        
        
int main() 
 {
   int n;
   cout<<"Enter a number : " ;
   cin>>n;
   cout<<"Absolute Difference of "<<n<<" is "<<test(n);
   return 0;    
}

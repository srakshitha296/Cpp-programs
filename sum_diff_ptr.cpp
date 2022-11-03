#include <iostream>
#include<math.h>
using namespace std;

void update(int *a,int *b) {
    int sum=*a+*b;
    cout<<sum<<endl;;
    int diff=fabs(*a-*b);
    cout<<diff<<endl;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
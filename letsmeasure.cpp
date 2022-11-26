#include<iostream> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library
#include<math.h>
using namespace std;

int main() {

    //Your code here 
    int a,b,num1,num2;
    scanf("%d%d",&a,&b);
    
    num1=pow(a,b);
    num2=pow(b,a);

    if(num1>num2)
    printf("First");
    else if(num1<num2)
    printf("Second");
    else 
    printf("Equal");
    return 0;
}
#include<iostream>
#include<windows.h>
using namespace std;

int area(int);
int area(int,int);
float area(float);

int main() {
    system("cls");
    int side, length, breadth, choice;
    float radius;
    cout<<"----------AREA CALCULATOR----------\n";
    cout<<"1. Square\n2. Rectangle\n3. Circle\n";

    while(1) {
    cout<<"\n\nEnter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :{
            cout<<"Enter the side : ";
            cin>>side;
            cout<<"Area of square is : "<<area(side);
        }
        break;
        case 2 :{
            cout<<"Enter the length and breadth : ";
            cin>>length>>breadth;
            cout<<"Area of rectangle is : "<<area(length, breadth);
        }
        break;
        case 3 :{
            cout<<"Enter the radius : ";
            cin>>radius;
            cout<<"Area of circle is : "<<area(radius);
        }
        break;
        default : cout<<"Invalid input !!";

    }
    }
    return 0;
}

int area(int side)
{
    return(side*side);
}
int area(int length,int breadth)
{
    return(length*breadth);
}
float area(float radius)
{
    return(3.14*radius*radius);
}

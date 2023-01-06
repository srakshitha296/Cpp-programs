#include<iostream>
using namespace std;
class Student
{
		private: 
        char name[20],add[20];
		int roll;
		 public:
         Student ( );//Constructor
		 ~Student( );//Destructor
		void read( );
		void display( );			
};
Student :: Student( )
{
	cout<<"This is Student Details"<<endl;
}
void Student :: read( )
{
	cout<<"Enter the student Name : ";
	cin>>name;
	cout<<"Enter the student roll no : ";
	cin>>roll;
	cout<<"Enter the student address : ";
	cin>>add;
}
void Student :: display( )
{
	cout<<"Student Name : "<<name<<endl;
	cout<<"Roll no   is :"<<roll<<endl;
	cout<<"Address is :"<<add<<endl;
}
Student:: ~Student( )
{
	cout<<"Student Detail is Closed";
}
 
int main( )
{
	Student s;
s.read ( );
s.display ( );
return 0;
}
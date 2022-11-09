  // PROGRAM USING CLASSES AND OBJECTS
  
  
  #include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    public:
    int emp_no;
    char name[20];
    char designation[50];

    public:
    void employeInfo()
    {
        cout<<"Name   Employe number  Designation"<<endl;
        cin>>name>>emp_no>>designation;
    }
};

class Salary : public Emp
{
    private:
   float basicPay,hra,grossPay;

    public:
    void salaryDetails()
    {
        cout<<"Basic pay   HRA"<<endl;
        cin>>basicPay>>hra;
    }

    void salaryCal()
    {
      grossPay=basicPay+hra;
    }

    void display()
    {
        cout<<"\n"<<"Employee Number : "<<emp_no<<"\n"<<"Name : "<<name<<"\n"<<"Designation : "<<designation<<"\n"<<"Basic : "<<basicPay<<"\n"<<"HRA : "<<hra<<"\n"<<"Gross salary : "<<grossPay;
    }
};

int main()
{
    Salary emp1;
    emp1.employeInfo();
    emp1.salaryDetails();
    emp1.salaryCal();
    emp1.display();
return 0;
}


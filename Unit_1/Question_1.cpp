//Write a C++ program to create a class Student with data members rollNo, name, and marks. Create an object, assign values to its data members
//display the complete student record using a member function.

#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNo;
    string name;
    float marks;

    void display()
    {
        cout<<"   ===Student Record==="<<endl;
        cout<<"Roll No. of student is:"<<rollNo<<endl;
        cout<<"Name of student is:"<<name<<endl;
        cout<<"Marks of student is:"<<marks<<endl;
    }
};

int main()
{
    Student Vedant;
    Vedant.rollNo=42;
    Vedant.name="Vedant Choudhari";
    Vedant.marks=96.72;
    Vedant.display();
    return 0;
}


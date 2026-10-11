 //Write a C++ program to create a class Student having data members rollNo and name. 
//Use a default constructor to initialize rollNo to 101 and name to "ABC". 
//Display the values using a member function.

#include<iostream>
using namespace std;

class Student 
{
    public:
    int rollNo;
    string name;

    Student()
    {
        rollNo=101;
        name="ABC";
        cout<<"The roll no is "<<rollNo<<endl;
        cout<<"The name is "<<name<<endl;
    }
};

int main()
{
    Student s1;
    return 0;
}

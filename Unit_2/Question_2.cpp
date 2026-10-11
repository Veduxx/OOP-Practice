//Create a class Employee with data members empId, name, and salary.
//Use a parameterized constructor to initialize these values and display the details of an employee

#include<iostream>
using namespace std;

class Employee
{
    private:
    int empId;
    string name;
    float salary;

    public:
    Employee(int id,string n,float s)
    {
        empId=id;
        name=n;
        salary=s;
    }

    void display()
    {
        cout<<"Employee Id is "<<empId<<endl;
        cout<<"Employe name is "<<name<<endl;
        cout<<"Employee salary is $"<<salary<<endl;
    }
};

int main()
{
    Employee e1(42,"Vedant Choudhari",25000);
    e1.display();
    return 0;
}

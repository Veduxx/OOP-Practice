//Create a class Employee in which employeeId is public and salary is private. 
//Provide public member functions to set and display the salary. Demonstrate that salary cannot be accessed directly from main()

#include<iostream>
using namespace std;

class Employee
{
    public:
    int employeeId;
    void setSalary(int s)
    {
         salary = s;
    }
    void displaySalary()
    {
        cout<<"Employee's salary is $"<<salary<<endl;
    }

    private:
    int salary;
};

int main()
{
    Employee e1;
    e1.employeeId=101;
    e1.setsalary(20000);
    cout<<"Employee ID : "<<employeeId<<endl;
    e1.displaySalary();
    return 0;
}

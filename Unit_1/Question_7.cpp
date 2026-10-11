//Create a class Employee with a static data member count. Increase count whenever employee data is entered through a member function. 
//Create four employee objects and display the final shared count.

#include<iostream>
using namespace std;

class Employee 
{
    public:
    static int count;
    string eName;

    void setName(string name)
    {
        eName = name;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};
int Employee::count=0;
int main()
{
    Employee Vedant;
    Vedant.setName("Vedant Choudhari");
    

    Employee Rakesh;
    Rakesh.setName("Rakesh Kumar");

    cout<<Employee::getCount()<<endl;
    
}

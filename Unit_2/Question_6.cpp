//Create a class Demo. The constructor should display "Object Created" and the destructor should display "Object Destroyed". 
//Create three objects and observe the order in which constructors and destructors are called.

#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Object Created"<<endl;
    }
    ~Demo()
    {
        cout<<"Object Destroyed"<<endl;
    }
};

int main()
{
    Demo d1,d2,d3;
    return 0;
}

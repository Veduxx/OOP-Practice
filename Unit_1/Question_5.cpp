//Create a class Car with data members brand and speed. Create three objects and assign different values to each object. 
//Display all three objects to demonstrate that every object has its own copy of non-static data members.

#include<iostream>
using namespace std;

class Car
{
    public:
    string brand;
    float speed;

    void display()
    {
        cout<<"Car brand is "<<brand<<endl;
        cout<<brand<<"'s speed is "<<speed<<"kmph"<<endl;
        cout<<"\n\n";
    }
};

int main()
{
    Car c1;
    Car c2;
    Car c3;
    c1.brand = "Ferrari";
    c2.brand = "Lamborghini";
    c3.brand = "Bentley";
    c1.speed = 236.07;
    c2.speed = 234.56;
    c3.speed= 235.87;
    c1.display();
    c2.display();
    c3.display();
    return 0 ;
}

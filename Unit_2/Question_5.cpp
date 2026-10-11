//Write a C++ program to create a class Rectangle with data members length and breadth. 
//Initialize both values using a member initializer list. Calculate and display the area of the rectangle.

#include<iostream>
using namespace std;

class Rectangle
{
    public:
    Rectangle(float length,float breadth):x(length),y(breadth)
    {
        
    }
    float x;
    float y;
};
int main()
{
    Rectangle r(2.5,4.0);
    cout<<"Length = "<<r.x<<" cm"<<endl;
    cout<<"Breadth = "<<r.y<<" cm"<<endl;
    cout<<"Area = "<<(r.x)*(r.y)<<" sq.cm"<<endl;
    return 0;
}

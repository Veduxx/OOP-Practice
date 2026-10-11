//Create a class Rectangle with data members length and breadth. Create two objects with different values.
//Write member functions to calculate and display the area of each rectangle.

#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    int area;

    void display()
    {
        area = length*breadth;
        cout<<"The length of rectangle is = "<<length<<" cm"<<endl;
        cout<<"The breadth of rectangle is = "<<breadth<<" cm"<<endl;
        cout<<"The area of Rectangle is = "<<area<<" sq.cm"<<endl;
    }
};

int main()
{
    Rectangle size;
    size.length= 30;
    size.breadth = 16;
    size.display();
}

#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    float getRadius()
    {
        return radius;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1;
    float r;

    cout << "Enter radius of circle = ";
    cin >> r;

    c1.setRadius(r);

    cout << "Radius of circle = "
         << c1.getRadius() << " cm" << endl;

    cout << "Area of circle = "
         << c1.area() << " sq.cm" << endl;

    return 0;
}

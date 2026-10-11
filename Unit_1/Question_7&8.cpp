#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        count++;
    }

    static void displayCount()
    {
        cout << "Total number of employees = " << count << endl;
    }
};

int Employee::count = 0;

int main()
{
    Employee e1, e2, e3, e4;

    cout << "Enter details of Employee 1:" << endl;
    e1.getData();

    cout << "Enter details of Employee 2:" << endl;
    e2.getData();

    cout << "Enter details of Employee 3:" << endl;
    e3.getData();

    cout << "Enter details of Employee 4:" << endl;
    e4.getData();

    Employee::displayCount();

    return 0;
}

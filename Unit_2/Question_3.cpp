//Write a program to create a class Product having productId, productName, and price. 
//Create a constructor with default values. 
//Demonstrate object creation without passing arguments and by passing custom values.

#include<iostream>
using namespace std;

class Product
{
    public:
    int productId;
    string productName;
    float price;

    Product(int id=45,string name="ParleG",float p = 20)
    {
        productId=id;
        productName=name;
        price=p;
    }
    
};
int main()
{
    Product p1;
    cout<<"The product id is "<<p1.productId<<endl;
    cout<<"The name of product is "<<p1.productName<<endl;
    cout<<"The price is $"<<p1.price<<endl;
    return 0;
}

//Create a class Product with private data members productId, productName, and price. 
//Provide public member functions to accept values, apply a 10% discount, and display the final price. Create at least two product objects.

#include<iostream>
using namespace std;

class Product
{
    private:
    int productId;
    string productName;
    float price;

    public:
    void accept()
    {
        cout<<"Enter product ID : ";
        cin>>productId;
        cout<<"Enter product name : ";
        cin>>productName;
        cout<<"Enter product price : $";
        cin>>price;
        cout<<"\n\n";
    }

    void applyDiscount()
    {
        price=price-(price*10/100);
    }

    void display()
    {
        cout<<"\nProduct ID : "<<productId<<endl;
        cout<<"Product name : "<<productName<<endl;
        cout<<"Product price : $"<<price<<endl;
    }
};

int main()
{
    Product p1,p2;

    cout<<"Enter details of product 1\n";
    p1.accept();
    p1.applyDiscount();
    cout<<"Enter details of product 2\n";
    p2.accept();
    p2.applyDiscount();
    cout<<"\n---Product Details---\n";
    p1.display();
    p2.display();
    return 0;
}

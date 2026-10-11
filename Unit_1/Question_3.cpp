//Create a class BankAccount with data members accountNumber, holderName, and balance. 
//Write member functions to deposit an amount, withdraw an amount, and display the updated balance.

#include<iostream>
using namespace std;

class BankAccount
{
    public:
    string accountNumber;
    string holderName;
    float balance;
    float withdraw;
    float deposit;
    float New1;
    float New2;

    void display()
    {
       
        cout<<"===Bank account==="<<endl;
        cout<<"Enter your account number:";
        cin>>accountNumber;
        cout<<"\nAccount holder name is "<<holderName<<endl;
        cout<<"Balance = $"<<balance<<endl;
        cout<<"Enter amount to deposit = $";
        cin>>deposit;
        New1=balance+deposit;
        cout<<"\nBalance = $"<<New1<<endl;
        cout<<"Enter amount to withdraw = $";
        cin>>withdraw;
        New2=New1-withdraw;
        cout<<"\nBalance = $"<<New2<<endl;
        
    }
};
int main()
{
     
     BankAccount customer;
     customer.holderName="Vedant Choudhari";
     customer.balance=100;
     customer.display();
   
}

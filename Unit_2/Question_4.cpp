//Create a class Book with data members bookId, title, and price. 
//Declare a parameterized constructor inside the class and define it outside the class using the scope resolution operator ::.
//Display the book details.

#include<iostream>
using namespace std;

class Book
{
    int bookId;
    string title;
    float price;

    public:
    Book(int,string ,float );
    void display();
};
Book::Book(int id, string t,float p)
    {
    bookId=id;
    title=t;
    price=p;
    
    }
void Book::display()
{
    cout<<bookId<<"\t"<<title<<"\t"<<price<<endl;
}

int main()
{
    cout<<"==Book details=="<<endl;
    Book b(101,"GOTHIC",499);
    b.display();
    return 0;
}

#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;
    void display()
    {
        cout<<"Title:"<<title
        <<",Author:"<<author
        <<",price:Rs."<<price<<endl;
    }
};
int main()
{
    Book b1,b2;
    b1.title="cpp programming";
    b1.author="bjame stroustrup";
    b1.price=750.50;
    b2.title="Data structure";
    b2.author="Mark Allen weiss";
    b2.price=600.75;
    b1.display();
    b2.display();
    return 0;
}
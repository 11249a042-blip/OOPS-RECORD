#include<iostream>
using namespace std;
class book{
    string title,author;
    float price;
    public:
    book(string t,string a, float p)
    {
        title=t;
        author=a;
        price=p;
    }
    void display()
    {
        cout<<"Title:"<<title<<",Author:"<<author<<",Price:"<<price<<endl;
    }
};
int main()
{
    book b1("c++ basics","Brinda",300);
    b1.display();
    return 0;
}
#include<iostream>
using namespace std;
class student{
    string name;
    public:
    student(string n){
        name=n;
        cout<<"constructor called for"<<name<<endl;
    }
    ~student()
    {
        cout<<"Destructor called for"<<name<<endl;
    }
    };
    int main()
    {
        student s1("Brinda");
        return 0;
}
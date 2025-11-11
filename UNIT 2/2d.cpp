#include<iostream>
using namespace std;
class Employee{
    string name;
    int id;
    float salary;
    public:
    Employee(string n,int i,float s)
    {
        name=n;
        id=i;
        salary=s;
    }
        void display()
        {
            cout<<"Name:"<<name<<",ID:"<<id<<",salary:"<<salary<<endl;
        }
};
int main(){
    Employee e1("brinda",101,250000);
    e1.display();
    return 0;
}
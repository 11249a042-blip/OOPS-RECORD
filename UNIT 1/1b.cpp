#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float marks;
    void display()
    {
        cout<<"Name:"<<name
        <<",Roll No:"<<rollno
        <<",Marks:"<<marks<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.name="brinda";
    s1.rollno=101;
    s1.marks=90;
    s2.name="ramya";
    s2.rollno=102;
    s2.marks=80;
    s3.name="sandeep";
    s3.rollno=103;
    s3.marks=75;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
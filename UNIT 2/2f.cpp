 #include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    public:
    student(string n,int r){
        name=n;roll=r;
    }
    void display()
    {
        cout<<"Name:"<<name<<",Roll:"<<roll<<endl;
    }
};
int main()
{
    student s1("Brinda",101);
    s1.display();
    return 0;
}
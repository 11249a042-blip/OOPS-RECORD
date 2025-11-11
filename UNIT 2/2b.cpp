#include<iostream>
using namespace std;
class bankaccount{
    int accountnumber;
    float balance;
    public:
    BankAccount(){
        accountnumber=0;
        balance=0;
    }
    Bankaccount(int a,float b)
    {
        accountNumber=a;
        balance=b;
    }
    void display()
    {
        cout<<"account:"<accountNumber<<",balance:"<<balance<<endl;
    }
};
    int main()
    {
       bankaccount b1;
    bankaccountb2(12345,5000);
        b1.display();
        b2.display();
        return 0;
    }
#include<iostream>
using namespace std;
class bank_account{
    int*balance;
    public:
    bank_account(int b){
        balance=new int(b);
        cout<<"account created"<<endl;
    ~bank account()
        {
            delete account;
            cout<<"account destroyed"<<endl;
        }
    }
};
int main()
{
    bank_account1(5000);
    return 0;
}
#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    string processer;
    int ram;
    void disply()
    {
        cout<<"Brand:"<<brand
        <<",processer:"<<processer
        <<"RAM"<<ram<<"GB"<<endl;
    }
};
int main()
{
    Laptop b,k;
    b.brand="Dell";
    b.processer="intelI5";
    b.ram=8;
    k.brand="HP";
    k.processer="AMD Ryzen5";
    k.ram=16;
    b.disply();
    k.disply();
    return 0;
}
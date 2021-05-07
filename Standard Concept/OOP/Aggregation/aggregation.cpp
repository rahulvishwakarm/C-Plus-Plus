#include<iostream>
#include<conio.h>

using namespace std;


// Associtaion - It is the type of relation where there isno connection of one class to another
// Aggregation - It is the relationShip where child has are not dependent on each othe rbut child class consist a property of parent class

class Pay
{
    public:
        void pay1()
        {
            int paytm = 50;
            int paypal = 32;
            cout<<paytm<<endl;
            cout<<paypal<<endl;
        }
};

class AnothePay
{
    private:
        Pay *paytm;
    public:
        void pay2()
        {  
            cout<<"Paytm: "<<paytm;
        }
};

int main()
{
    Pay p= Pay();
    AnothePay ap = AnothePay();
    p.pay1();
    ap.pay2();
    getch();
}
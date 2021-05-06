#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    tst:{
    cout<<"get tst";
    goto newtst;
    }

    newtst:for(int i=0;i<7;i++) {
        if(i==5) {
            goto tst;
        }
        else{
            cout<<i;
            break;
        }
    }
}
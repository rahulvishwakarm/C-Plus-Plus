#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int tst[3][3];
    tst[0][0]=23;
    tst[0][1]=12;
    tst[1][1]=15;
    tst[1][2]=20;
    tst[2][0]=19;
    tst[2][2]=17;

    int newtst[3][3] ={
        {2,4,6},
        {7,5,3},
        {9,4,2}
    };

    //traversal tst
    cout<<"Traversing tst:"<<endl;
    for(int i=0;i<3;++i) {
        for(int j=0;j<3;++j) {
            cout<<tst[i][j]<<" ";
        }
        cout<<endl;
    }

    //traversal newtst
    cout<<"Traversing newtst:"<<endl;
    for(int i=0;i<3;++i) {
        for(int j=0;j<3;++j) {
            cout<<newtst[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
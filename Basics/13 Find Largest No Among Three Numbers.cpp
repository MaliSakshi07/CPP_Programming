#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1=0, No2=0, No3=0;

    cout<< "Enter 3 Different Numbers :";
    cin>>No1>>No2>>No3;

    if(No1 >= No2 && No1 >= No3)
    {
        cout<<No1 <<" is Largest Number."<<endl;
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        cout<<No2 <<" is Largest Number.";
    }
    else
    {
        cout<< No3 << " is Largest Number.";
    }
    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0;

    cout<<"Table of 5 =\n";
    for(i = 1; i<=10; i++)
    {
        cout<< 5 << "*" << i << "=" << 5*i <<endl;
    }

    cout<<"\nThanks !!!";

    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, No = 0;

    cout<<"\n Enter a Number =";
    cin>>No;

    for(i=1; i<=10; i++)
    {
        cout<< No <<" * "<< i << " = " << i*No <<endl;
    }

    cout<<"\nThanks!!";
    getch();
    return 0;
}

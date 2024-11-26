#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int No=0;

    cout<<"Enter Positive Number =";
    cin>>No;

    if(No % 2 ==0)
    {
        cout<<"\nGiven Number is Even.";
    }
    else
    {
        cout<<"Given Number is Odd.";
    }
    getch();
    return 0;
}

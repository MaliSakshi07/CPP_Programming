#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0;

    cout<<"Enter a Number :";
    cin>>No;

    if(No > 0)
    {
        cout<<"Given Number is Positive.";
    }
    else
    {
        cout<<"Given Number is Negative.";
    }

    getch();
    return 0;
}

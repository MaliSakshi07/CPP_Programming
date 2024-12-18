#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Num = 0, O_Num = 0, Res = 0, Rem = 0;

    cout<<"Enter a Three Digit Number =";
    cin>>Num;

    O_Num = Num;

    while(O_Num != 0)
    {
        Rem = O_Num % 10;
        Res += Rem * Rem * Rem;
        O_Num /= 10;
    }
    if(Res == Num)
    {
        cout<<Num<<" is a Armstrong Number.";
    }
    else
    {
        cout<<Num<<" is Not Armstrong Number";
    }

    getch();
    return 0;
}

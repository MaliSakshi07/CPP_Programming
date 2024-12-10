#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0, Fact = 1, Temp = 0;

    cout<<"\nEnter a Number :";
    cin>>No;

    Temp = No;

    for(Temp = 1; Temp <= No; Temp++)
    {
        Fact = Fact * Temp;
    }
    cout<<"\n Given Factorial "<<No<<" is = "<<Fact<<endl;

    cout<<"\n Thanks!";

    getch();
    return 0;
}

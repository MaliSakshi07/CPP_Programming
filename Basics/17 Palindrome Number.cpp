#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Num = 0, Rem = 0, Temp = 0, Sum = 0;

    cout<<"Enter a Positive Number :";
    cin>>Num;

    Temp = Num;

    while(Num > 0)
    {
        Rem = Num % 10;
        Sum = (Sum*10) + Rem;
        Num = Num / 10;
    }
    if(Temp == Sum)
    {
      cout<<"Given Number is Palindrome.";
    }
    else
    {
        cout<<"Given Number is Not Palindrome.";
    }
    getch();
    return 0;
}

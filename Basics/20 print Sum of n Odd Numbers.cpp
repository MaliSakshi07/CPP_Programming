using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int Num = 0, i = 0, Sum = 0;

    cout<<"Enter a Number :";
    cin>>Num;

    for(i=1; i<=Num; i++)
    {
        if(i%2 != 0)
        {
            Sum = Sum + i;
        }
    }
    cout<<"Sum of Odd Numbers ="<<Sum;

    getch();
    return 0;
}

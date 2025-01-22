using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0, Sum = 0;

    cout<<"Enter a Number :";
    cin>>No;

    for(i = 1; i <= No; i++)
    {
        if(i%2 == 0)
        {
            Sum = Sum+i;
        }
    }
    cout<<"Sum Of Even Numbers = "<<Sum;

    getch();
    return 0;
}

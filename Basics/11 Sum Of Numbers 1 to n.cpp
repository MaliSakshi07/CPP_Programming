#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n = 0, Cnt = 1, Sum = 0;

    cout<<"Enter Number :";
    cin>>n;

    while(Cnt <= n)
    {
        Sum += Cnt;
        Cnt += 1;
    }
    cout<<"Sum of Number 1 To "<< n << ": "<<Sum;

    getch();
    return 0;
}

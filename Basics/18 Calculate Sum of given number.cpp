#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Num = 0, M = 0, Sum = 0;

    cout<<"Enter a Number =";
    cin>>Num;

    while(Num > 0)
    {
        M = Num%10;
        Sum += M;
        Num = Num/10;
    }

    cout<< "Sum = "<<Sum<<endl;

    getch();
    return 0;
}

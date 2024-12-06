#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0, i = 0;

    cout<<"Enter a Number to print it's reverse number :";
    cin>>No;

    i = 10;
    while(i >=1)
    {
        cout << i*No<<endl;
        i--;
    }

    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, No = 0;

    cout<<"Enter a Number = ";
    cin>>No;

    for(i=2; i < No; i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }
    cout<<"Iteration = "<<i<<endl;

    if(No == i)
    {
        cout<< No <<" is Prime Number."<<endl;
    }
    else
    {
        cout<< No <<" is Not Prime Number."<<endl;
    }
    getch();
    return 0;
}

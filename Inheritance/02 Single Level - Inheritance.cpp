#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a number";
    cin>>a;

    c=1;
    b=0;
    
    for(int i=1;i<=10;i++)
    {
        c=(i*a);
        b=c+i;

    }
    
     cout<<"\n"<<b;
}

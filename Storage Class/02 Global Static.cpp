using namespace std;
#include<iostream>
#include<conio.h>

int gnum = 100;

void fun()
{
    int i = 10;
    static int j = 40;

    cout<<"\nValue of Non-Static Variable : "<<i;
    cout<<"\nValue Of Static Variable : "<<j;
    cout<<"\nValue of Global Variable : "<<gnum<<endl;

    i++;
    j++;
    gnum++;

    return;
}

int main()
{
    fun();
    fun();

    gnum++;

    fun();
    fun();

    getch();
    return 0;
}



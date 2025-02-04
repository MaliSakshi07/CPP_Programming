using namespace std;
#include<iostream>
#include<conio.h>
void fun();

int main()
{
    fun();
    fun();

    fun();
    fun();

    getch();
    return 0;
}

void fun()
{
    static int i = 10;
    int j = 10;

    cout<<"\nValue of Static Variable = "<<i;
    cout<<"\nValue of Non-static Variable  = "<<j<<endl;

    i++;
    j++;

    return;

}


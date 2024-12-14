#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    cout<<"\nSize of int : "<<sizeof(intType) << " Byte"<<endl;
    cout<<"\nSize of float : "<<sizeof(floatType) <<"Byte"<<endl;
    cout<<"\nSize of double : "<<sizeof(doubleType) <<"Byte"<<endl;
    cout<<"\nSize of char : "<<sizeof(charType) << "Byte"<<endl;

    getch();
    return 0;
}

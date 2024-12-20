#include<iostream>
#include<conio.h>
using namespace std;

class Math
{
    public:
        int Num1 =0, Num2 = 0, Res = 0;
        void Add();
        void Sub();
};
void Math :: Add()
{
    Res = Num1 + Num2;
}
void Math :: Sub()
{
    Res = Num1 - Num2;
}

int main()
{
    Math Obj1, Obj2;

    Obj1.Num1 = 10;
    Obj1.Num2 = 20;
    Obj2.Num1 = 40;
    Obj2.Num2 = 20;

    Obj1.Add();
    cout<<"Addition ="<<Obj1.Res<<endl;

    Obj2.Sub();
    cout<<"Subtraction ="<<Obj2.Res<<endl;;

    getch();
    return 0;
}

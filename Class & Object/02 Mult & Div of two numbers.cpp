#include<iostream>
#include<conio.h>
using namespace std;

class Math
{
    public:
        int Num1 = 0, Num2 = 0, Res = 0;
        void Mult();
        void Div();
};

void Math :: Mult()
{
    Res = Num1 * Num2;
}

void Math :: Div()
{
    Res = Num1 / Num2;
}

int main()
{
    Math Obj1, Obj2;

    Obj1.Num1 = 20;
    Obj1.Num2 = 10;
    Obj2.Num1 = 50;
    Obj2.Num2 = 10;

    Obj1.Mult();
    cout<<"Multiplication = "<<Obj1.Res<<endl;

    Obj2.Div();
    cout<<"Division = "<<Obj2.Res<<endl;

    getch();
    return 0;
}

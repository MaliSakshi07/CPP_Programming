#include<iostream>
#include<conio.h>
#define Pi 3.14
using namespace std;

class Circle
{
    public:
        float Area = 0 , Rad = 0;
        void CircleArea();

};
void Circle :: CircleArea()
{
    Area = (Pi*Rad * Rad);
}

int main()
{
    Circle Obj;

    Obj.Rad = 5;

    Obj.CircleArea();
    cout<<"Area Of Circle = "<<Obj.Area<<endl;

    getch();
    return 0;
}



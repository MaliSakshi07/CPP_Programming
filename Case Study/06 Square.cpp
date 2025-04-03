using namespace std;
#include<iostream>
#include<conio.h>

class Square
{
    public:
        float Side, Area,Perimeter;

    Square();
    Square(float);
    ~Square();

    void Calculate_Area();
    void Calculate_Perimeter();
};

Square :: Square()
{
    Side = 0.0;

    cout<<"\nInside Default Constructor..."<<endl;
}
Square :: Square(float s)
{
    Side = s;

    cout<<"\nInside Parameterized Constructor..."<<endl;
}
Square :: ~Square()
{
    cout<<"\nInside Destructor..."<<Area<<endl;
}

void Square :: Calculate_Area()
{
    Area = Side*Side;

    cout<<"\nArea Of Square :"<<Area<<endl;
}
void Square :: Calculate_Perimeter()
{
    Perimeter = 4*Side;

    cout<<"\nPerimeter Of Square :"<<Perimeter<<endl;
}

int main()
{
    Square obj1;
    obj1.Calculate_Area();
    obj1.Calculate_Perimeter();

    Square obj2(5);
    obj2.Calculate_Area();
    obj2.Calculate_Perimeter();

    getch();
    return 0;
}

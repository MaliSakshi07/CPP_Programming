#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
    public:
        float Rad, Area, Circum;

        Circle();
        Circle(float Rad);
        Circle(Circle &);
        ~Circle();

        void Calculate_Area();
        void Calculate_Circumferance();
        void Display_Details();

    private:
        const int PI = 3.14;

};
Circle :: Circle()
{
    Rad = Area = Circum =0;
    cout<<"\nIn Default Constructor..."<<endl;
}
Circle :: Circle(float Radius)
{
    Rad = Radius;
    Area = Circum = 0;
    cout<<"\nIn Parameterized Constructor..."<<endl;
}
Circle :: Circle(Circle &Ref)
{
    Rad = Ref.Rad;
    Area = Ref.Area;
    Circum = Ref.Circum;
    cout<<"\nIn Copy Constructor..."<<endl;
}
Circle :: ~Circle()
{
    cout<<"\nIn Destructor..."<<Rad<<endl;
}
void Circle :: Calculate_Area()
{
    Area = PI*Rad*Rad;

    cout<<"\nArea Of Circle = "<<Area<<endl;
}
void Circle :: Calculate_Circumferance()
{
    Circum = 2*PI*Rad;

    cout<<"\nCircumference = "<<Circum<<endl;
}
void Circle :: Display_Details()
{
    cout<<"Radius ="<<Rad<<endl;
    cout<<"Area = "<<Area<<endl;
    cout<<"Circumference Of Circle= "<<Circum<<endl;
}

int main()
{
    Circle obj1;
    obj1.Calculate_Area();
    obj1.Rad = 2;
    obj1.Calculate_Circumferance();
    obj1.Display_Details();

    Circle obj2(5.5);
    obj2.Calculate_Area();
    obj2.Calculate_Circumferance();
    obj2.Display_Details();

    Circle obj3(obj2);
    obj3.Calculate_Area();
    obj3.Calculate_Circumferance();
    obj3.Display_Details();
}

using namespace std;
#include<iostream>
#include<conio.h>

class Triangle
{
    public:
        float Base, Height,a,b,Area,Perimeter;

    Triangle();
    Triangle(float,float,float,float);
    ~Triangle();

    void Calculate_Area();
    void Calculate_Perimeter();
    void Display_Details();

};

Triangle :: Triangle()
{
   Base = Height = a = b = 0.0;

   cout<<"\nInside Default Constructor..."<<endl;
}
Triangle :: Triangle(float base, float h,float A,float B)
{
    Base = base;
    Height = h;
    a = A;
    b = B;

    cout<<"\nInside Parameterized Constructor..."<<endl;
}
Triangle :: ~Triangle()
{
    cout<<"\nInside Destructor..."<<Area<<endl;
}
void Triangle :: Calculate_Area()
{
    Area = 0.5*Base*Height;
    ///cout<<"\nArea Of Triangle :"<<Area<<endl;
}
void Triangle :: Calculate_Perimeter()
{
    Perimeter = Base+a+b;
    ///cout<<"\nPerimeter Of Triangle= "<<Perimeter<<endl;
}
void Triangle :: Display_Details()
{
    cout<<"\nArea ="<<Area<<endl;
    cout<<"\nPerimeter :"<<Perimeter<<endl;
}

int main()
{
    Triangle obj1;
    obj1.Calculate_Area();
    obj1.Calculate_Perimeter();
    obj1.Display_Details();

    Triangle obj2(4,5,2,3);
    obj2.Calculate_Area();
    obj2.Calculate_Perimeter();
    obj2.Display_Details();

    getch();
    return 0;
}


#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
    public:
        float length,width,Area,Perimeter;

        Rectangle();
        Rectangle(float,float);
        ~Rectangle();

        void Calculate_Area();
        void Calculate_Perimeter();
        void Display_Details();
};

Rectangle :: Rectangle()
{
    length = width = Area = Perimeter =0.0;

    cout<<"\nInside Default Constructor..."<<endl;
}
Rectangle :: Rectangle(float L, float W)
{
    length = L;
    width = W;
    cout<<"\nInside Parameterized Constructor..."<<endl;
}
Rectangle :: ~Rectangle()
{
    cout<<"\nInside Destructor..."<<Area<<endl;
}
void Rectangle :: Calculate_Area()
{
    Area = length*width;

    ///cout<<"Area Of Rectangle : "<<Area<<endl;
}
void Rectangle :: Calculate_Perimeter()
{
    Perimeter = 2*(length+width);
}
void Rectangle :: Display_Details()
{
    cout<<"Length :"<<length<<endl;
    cout<<"Width :"<<width<<endl;
    cout<<"Area :"<<Area<<endl;
    cout<<"Perimeter :"<<Perimeter<<endl;
}

int main()
{
    Rectangle obj1;
    obj1.Calculate_Area();
    obj1.Calculate_Perimeter();
    obj1.Display_Details();

    Rectangle obj2(5,7);
    obj2.Calculate_Area();
    obj2.Calculate_Perimeter();
    obj2.Display_Details();

    getch();
    return 0;
}

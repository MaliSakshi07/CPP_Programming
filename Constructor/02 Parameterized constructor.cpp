using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:
        float Rad = 0, Area = 0;

    Circle()
    {
        cout<<"Circle :: Default Constructor";
        Rad = 0.0;
        Area = 0.0;
    }
    Circle(float R)
    {
        cout<<"\nCircle :: Parameterized Constructor";
        Rad = R;
        Area = 0.0;
    }
    void Area_Of_Circle()
    {
        float PI = 3.14;

        Area = PI * Rad * Rad;

        cout<<"\nCircle :: Area of circle";
    }
    ~Circle()
    {
        cout<<"\nCircle :: Destructor";
        cout<<"\nRad ="<<Rad;
    }

};
int main()
{
    Circle Obj1;

    cout<<"\nRadius = "<<Obj1.Rad<<"\nArea ="<<Obj1.Area;

    Obj1.Rad = 2.5;
    Obj1.Area_Of_Circle();

    cout<<"\nArea of Circle with radius "<<Obj1.Rad<<"is ="<<Obj1.Area;

    Circle Obj2(4.5);

    cout<<"\nRadius = "<<Obj2.Rad<<"\nArea ="<<Obj2.Area;

    Obj2.Area_Of_Circle();

    cout<<"\nArea of Circle with radius "<<Obj2.Rad<<"is ="<<Obj2.Area;

    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
    public:
        float Area = 0, length = 0, width = 0;
        void RectArea();

};

void Rectangle :: RectArea()
{
    Area = length*width;
}

int main()
{
    Rectangle obj;
    obj.length = 5;
    obj.width = 3;

    obj.RectArea();
    cout<<"Area of Rectangle : "<<obj.Area<<endl;
    getch();
    return 0;
}

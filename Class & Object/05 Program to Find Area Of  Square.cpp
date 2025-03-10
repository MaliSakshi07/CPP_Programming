#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
    public :
        int Area = 0, side = 0;

        void SquareArea();

};

void Square :: SquareArea()
{
    Area = side*side;
}
int main()
{
    Square obj;

    obj.side = 10;

    obj.SquareArea();
    cout<<"Area Of Square :"<<obj.Area<<endl;

    getch();
    return 0;
}

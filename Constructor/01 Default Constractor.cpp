using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:
        float Rad , Area;

        Circle()
        {
            cout<<"\nCircle :: Default Constructor";

            Rad = 0.0;
            Area = 0.0;
        }

        void Area_Of_Circle()
        {
            const float PI = 3.14;

            Area = PI*Rad*Rad;

            cout<<"\n Circle :: Area of Circle "<<Area<<endl;
        }

        ~Circle()
        {
            cout<<"\nCircle :: Destructor";
        }
};
int main()
{
    Circle obj;

    obj.Rad = 2.5;
    obj.Area_Of_Circle();

   cout<<"Area of circle with Radius "<<obj.Rad <<" is "<< obj.Area;

   getch();
   return 0;
}


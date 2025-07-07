#include<iostream>
#include<conio.h>
using namespace std;

class karad
{
 public:
    int a,b;

    karad()
    {
        cout<<"\nKarad :: Constructor"<<endl;
    }
    ~karad()
    {
        cout<<"\nKarad :: Destructor"<<endl;
    }
    void fun()
    {
        cout<<"\n Karad :: fun()"<<endl;
    }
};

class Pune : public karad
{
    int x,y;

    pune();
    ~Pune();
    void gun();


};

int main()
{
    karad k1;
    k1.a = 51;

    Pune p1;

    p1.a = 100;
    p1.x = 500;

    cout<<sizeof(k1)<<endl;
    cout<<sizeof(p1)<<endl;

    return 0;
}
    Pune :: Pune()
    {
        cout<<"\n Pune :: Constructor"<<endl;
    }
    Pune :: ~Pune()
    {
        cout<<"\nPune :: Destrucor"<<endl;
    }
    void Pune :: gun()
    {
        cout<<"\n Pune :: gun()"<<endl;
    }

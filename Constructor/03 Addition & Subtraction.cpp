using namespace std;
#include<iostream>
#include<conio.h>

class calc
{
    private:
        int N1,N2;

    public:
        int Sum , Sub;
    calc()
    {
        N1=N2=Sum=Sub=0;
        cout<<"\ncalc :: Default Constructor";
    }

    calc(int Num1,int Num2)
    {
        N1 = Num1;
        N2 = Num2;
        Sum = Sum = 0;
        cout<<"\ncalc :: Parameterized Constructor";
    }

    calc(calc &Ref)
    {
        this->N1 = Ref.N1;
        this->N2 = Ref.N2;

        this -> Sum = 0;
        this -> Sub = 0;

        cout<<"\ncalc :: Copy Constructor";
    }

    ~calc()
    {
        cout<<"\nclac :: Destructor"<<Sum;
    }

    void Set_Values()
    {
        cout<<"\nEnter Two Values :";
        cin>>N1>>N2;
    }

    void Addition()
    {
        Sum = N1 + N2;
    }

    void Subtraction()
    {
        Sub = N1 - N2;
    }
};

int main()
{
    calc Obj1;
    Obj1.Set_Values();
    Obj1.Addition();
    Obj1.Subtraction();
    cout<<"\nAddition of Obj1 = "<<Obj1.Sum;
    cout<<"\nSubtraction of Obj1 = "<<Obj1.Sub;

    calc Obj2(40,20);
    Obj2.Addition();
    Obj2.Subtraction();
    cout<<"\nAddition of Obj2 = "<<Obj2.Sum;
    cout<<"\nSubtraction of Obj2 = "<<Obj2.Sub;

    calc Obj3(Obj2);
    Obj3.Addition();
    Obj3.Subtraction();
    cout<<"\nAddition of Obj3 = "<<Obj3.Sum;
    cout<<"\nSubtraction of Obj3 = "<<Obj3.Sub;

    getch();
    return 0;
}

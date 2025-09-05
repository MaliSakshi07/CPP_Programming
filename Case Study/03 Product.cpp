#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Product
{
    private:
        int PId;
        char PName[40];
        float PPPrice;
        float PSPrice;
        int C_Stock;
        static int P_Cnt;

    public:
        Product();
        Product(int,char[],float,float,int);
        ~Product();

        void Accept_Product_Details();
        void Display_Product_Details();
};

Product :: Product()
{
    PId = C_Stock = 0;
    PPPrice = PSPrice = 0.0;
    strcpy(PName,"");

   cout<<"\nIn Default Constructor..."<<endl;
}
Product :: Product(int id, char Nm[],float PPrice,float SPrice,int Cstock)
{
    PId = id;
    strcpy(PName,Nm);
    PPPrice = PPrice;
    PSPrice = SPrice;
    C_Stock = Cstock;
    
    cout<<"\nIn Parameterized Constructor..."<<endl;
}
Product :: ~Product()
{
    cout<<"\nIn Destructor..."<<endl;
}
void Product :: Accept_Product_Details()
{
    cout<<"\n---Enter Product Details---"<<endl;

    cout<<"Enter Product Id :";
    cin>>PId;
    cout<<"Enter Product Name :";
    cin>>PName;
    cout<<"Enter Product Purchase Price :";
    cin>>PPPrice;
    cout<<"Enter Product Sales Price :";
    cin>>PSPrice;
    cout<<"Enter Product Current Stock :";
    cin>>C_Stock;
}
void Product :: Display_Product_Details()
{
   cout<<"\n----Product Details Are----"<<endl;

    cout<<"Product Id :"<<PId<<endl;
    cout<<"Product Name :"<<PName<<endl;
    
    cout<<"Product Purchase Price :"<<PPPrice<<endl;
    cout<<"Product Sales Price :"<<PSPrice<<endl;
    
    cout<<"Product Current Stock :"<<C_Stock<<endl;
}

int main()
{
    Product p1;
    p1.Accept_Product_Details();
    p1.Display_Product_Details();

    Product p2(101,"Mattress",3000,4000,5);

    p2.Display_Product_Details();

    getch();
    return 0;
}

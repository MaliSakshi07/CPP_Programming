#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Day=0;

    cout<<"Enter Day Number(1-7) to View Day Text :";
    cin>>Day;

    if(Day == 1)
    {
        cout<<"\nMonday";
    }
    else if(Day == 2)
    {
        cout<<"\nTuesday";
    }
    else if(Day == 3)
    {
        cout<<"\nWednesday";
    }
    else if(Day == 4)
    {
        cout<<"\nThursday";
    }
    else if(Day == 5)
    {
        cout<<"\nFriday";
    }
    else if(Day == 6)
    {
        cout<<"\nSaturday";
    }
    else if(Day == 7)
    {
        cout<<"\nSunday";
    }
    else
    {
        cout<<"\nInvalid Output!";
    }
    getch();
    return 0;
}

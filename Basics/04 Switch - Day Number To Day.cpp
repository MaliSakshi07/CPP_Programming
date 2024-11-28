#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char Day=0;

    cout<<"\nEnter Day Number(1-7) To View Day Text :";
    cin>>Day;

    switch(Day)
    {
        case '1':
            cout<<"\nMonday";
            break;

        case '2':
            cout<<"\nTuesday";
            break;

        case '3':
            cout<<"\nWednesday";
            break;

        case '4':
            cout<<"\nThursday";
            break;

        case '5':
            cout<<"\nFriday";
            break;

        case '6':
            cout<<"\nSaturday";
            break;

        case '7':
            cout<<"\nSaturday";
            break;

        default:
            cout<<"\nInvalid Input";
    }
    getch();
    return 0;
}


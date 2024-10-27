#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the day of the week: ";
    cin>>day;
    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        default:
            cout<<"Invalid";
        
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter the age";
    cin>>age;
    if(age<18)
    {
        cout<<"You are not eligible to vote";
    }
    else{
        cout<<"You are eligible to vote";
    }
    return 0;
}
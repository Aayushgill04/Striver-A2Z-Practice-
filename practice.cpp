#include<iostream>
using namespace std;
void pattern2(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<(n-i)+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<< " ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
}
void pattern(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j;
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=1;k<2*(n-i);k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<=(2*n - 1);i++){
        if(i>n)
        {
            for(int j=1; j<= (2*n - i); j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int n;
    cin>> n;
    pattern5(n);
}
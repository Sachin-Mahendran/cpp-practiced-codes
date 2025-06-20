#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(a%d==0)//if the given 'a' roads is divisible by the no of cars, the true
    {
        cout<<"car 1 goes in road a";
    }
    else if(b%d==0)if the given 'b' roads is divisible by the no of cars, the true

    {
        cout<<"car 2 goes in road b";
    }
    else if(c%d==0)if the given 'c' roads is divisible by the no of cars, the true

    {
        cout<<"car 1 goes in road c";
    }
    else//no path is divisible by no of cars, then false
    {
        cout<<"the path does not exist";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)//true block
    {
        cout<<a<<" is grater";
    }
    else if(b>a&&b>c)//false block
    {
        cout<<b<<" is greater";
    }
    else
    {
        cout<<c<<" is greater";
    }
}


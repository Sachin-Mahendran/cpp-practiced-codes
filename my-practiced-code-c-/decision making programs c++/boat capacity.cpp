#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;//ttl prs,adlt,child
    d=b*75+c*30;//ttl cap
    if(a>d)
    {
        cout<<"the boat is stable";
    }
    else
    {
        cout<<"the boat will drown";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    double b=a*0.5;// less or equal 200 units
    double c=a*0.65+100;//less or equal 400 units
    double d=a*0.80+200;//less or equal 600 units
    double e=a*1.25+425;//greater or equal 200 units
    if(c<=200)
    {
        cout<<"Rs."<<b;
    }
    else if(c<=400)
    {
        cout<<"Rs."<<c;
    }
    else if(d<=600)
    {
        cout<<"Rs."<<d;
    }
    else 
    {
        cout<<"Rs."<<e;
    }
}
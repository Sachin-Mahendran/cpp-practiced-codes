#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    b=a*a;
    c=b%10;
    
    if(c==a)
    {
       cout<<"automorphic number";
    }
    else
    {
        cout<<"not Automorphic number";   
    }
}

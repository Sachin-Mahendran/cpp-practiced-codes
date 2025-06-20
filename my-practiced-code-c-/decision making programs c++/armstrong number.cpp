#include<iostream>
using namespace std;
int main()
{
    int n,a=0,c,r;
    cin>>n;
    c=n;
   while(n>0)
   {
       r=n%10;
       a=a+r*r*r;
       n=n/10;
   }
       if(a==c)
       {
          cout<<"armstrong number";
       }
       else
       {
           cout<<"not a armstrong number";
       }
       
   }


#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   if(a>0&&b>0)//both and b should be +ve
   {
       cout<<"1st quadrant";
   }
   else if(b>0)//only b should be +ve
   {
       cout<<"2nd quadrant";
   }
   else if(a<0&&b<0)//both a and b should be -ve
   {
       cout<<"3rd quadrant";
   }
   else//only b should be 
   {
       cout<<"4th quadrant";
   }
}

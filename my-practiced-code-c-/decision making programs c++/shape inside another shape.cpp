#include<iostream>
using namespace std;
int main()
{
   int rad,len;//radius of circle and length of square
   cin>>rad>>len;
   if(rad*2<=len)//if length is greater,the ture
   {
       cout<<"circle can be inside the square";
   }
   else//false
   {
       cout<<"circle cannot be inside the square";
   }
   
}

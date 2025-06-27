#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

for(int i=0;i<n;i++)
{
  for(int j=0;j<n-i;j++)
  {
      cout<<" ";
  }
   for(int k=0;k<(i+i)+1;k++)
   {
       if(k==0||i==n-1||k==(i*2))
       {
       cout<<"*";
       }
       else
       {
           cout<<" ";
       }
   }
   cout<<endl;
}
}
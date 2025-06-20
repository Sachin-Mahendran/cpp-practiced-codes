#include <iostream>
using namespace std;
int main()
{
  float a,b;
  cin>>a>>b;
  b=b/100;
  float bmi=a/(b*b);
 
  if(bmi<18.5)
  {
      cout<<"under weight";
  }
  else if(bmi>=18.5&&bmi<=24.9)
  {
      cout<<"normal";
      
  }
  else
  {
      cout<<"obese";
  }
  
}
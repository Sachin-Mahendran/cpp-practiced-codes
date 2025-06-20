#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d,e,f,g,h,i;
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
  int flipkart=((b*a)/100)+c;
  int snapdeal=((e*d)/100)+f;
  int amazon=((h*g)/100)+i;
  cout<<"In Flipkart : Rs."<<flipkart<<endl;
  cout<<"In Snapdeal : Rs."<<snapdeal<<endl;cout<<"In Flipkart : Rs."<<flipkart<<endl;
  cout<<"In Amazon   : Rs."<<amazon<<endl;
  if(flipkart<snapdeal&&flipkart<amazon)
  {
      cout<<"he will prefer amazon";
  }
  else if(snapdeal<flipkart&&snapdeal<<amazon)
  {
      cout<<"he wil prefer snapdeal";
      
  }
  else
  {
      cout<<"he will prefer amazon";
}
}
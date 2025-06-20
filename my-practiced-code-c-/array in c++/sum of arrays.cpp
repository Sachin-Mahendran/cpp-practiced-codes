#include <iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a=a+arr[i];
    }
    cout<<a;
   
    return 0;
}
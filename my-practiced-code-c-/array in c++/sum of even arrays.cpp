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
    if(i%2==0)
    {
        a=a+arr[i];
    }
        
    }
     cout<<a;//ip:5 10 11 10 10 10 10 /op:30

    return 0;
}
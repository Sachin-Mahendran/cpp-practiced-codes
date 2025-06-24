#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=0;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            b=arr[i][j]+b;
        }
    }
    cout<<b<<" ";
}
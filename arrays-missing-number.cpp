#include<iostream>
using namespace std;
// Problem - Missing number in array 

int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<(n-1);i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<((n+1)*n)/2-sum<<endl;
    }
    return 0;
}
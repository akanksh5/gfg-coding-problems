#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i]==0)
            b[k++]=0;
    for(int i=0;i<n;i++)
        if(a[i]==1)
            b[k++]=1;
    for(int i=0;i<n;i++)
        if(a[i]==2)
            b[k++]=2;
    for(int i=0;i<n;i++)
        cout<<b[i]<<endl;
    return 0;    
}
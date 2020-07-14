#include<iostream>
using namespace std;

// Equilibrium point 
int main()
{
    int t,n,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        int a[n],sum=0,sumSoFar=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if((sum-a[i]-sumSoFar)==sumSoFar){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
            sumSoFar+=a[i];
        }
        if(!flag)
            cout<<-1<<endl;
    
    }
    return 0;
}
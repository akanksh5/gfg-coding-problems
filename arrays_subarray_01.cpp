#include<iostream>
using namespace std;

// This program evaluates on finding the indices to the subarray that adds up to a given sum.
int main()
{
    int t,n,k,p1,p2,sum;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        p1=0,p2=1;
        sum=a[p1]+a[p2];
        while(p1<=p2){
            if(sum==k){
                cout<<p1+1<<" "<<p2+1;
                break;
            }
            if(sum<k){
                ++p2;
                sum+=a[p2];
            }
            else{
                sum-=a[p1++];
            }
            
        }
    }
    return 0;
}
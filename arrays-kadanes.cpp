#include<iostream>
using namespace std;
int main()
{
    int n,t,maxc,maxf;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        maxc=a[0],maxf=a[0];
        
        for(int i=1;i<n;i++){    
            maxc+=a[i];
            if(maxf<maxc){
                maxf=maxc;
            }
            if(maxc<=a[i]){
                maxc=a[i];
                if(maxf<maxc)
                    maxf=maxc;
                continue;
            }
        }
        
        cout<<maxf<<endl;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Arrays - Count the triplets
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],count=0;
        unordered_map <int,bool> map;
        for(int i=0;i<n;i++){
            cin>>a[i];
            map[a[i]]=true;
        }
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                if(map[a[i]+a[j]]){
                    count++;
                }
            }
        if(count==0){
            cout<<-1<<endl;
            continue;
        }    
        cout<<count<<endl;
    }
    return 0;
}
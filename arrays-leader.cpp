#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Leaders in an array 
int main ()
{
    int t,n,max;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        vector<int> ans;
        for(int i=0;i<n;i++)
            cin>>a[i];
        max=a[n-1];
        ans.push_back(max);
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>max){
                ans.push_back(a[i]);
                max=a[i];
            }
        }
        for (auto i = ans.rbegin(); i != ans.rend(); ++i) 
            cout << *i << " "; 
        cout<<endl;
    }
    return 0;
}
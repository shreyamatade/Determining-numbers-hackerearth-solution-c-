#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];

    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<long long int,long long int>m;

    for(long long int i=0;i<n;i++)
    {
        m[a[i]]=m[a[i]]+1;

    }

    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second==1)
        {
            cout<<it->first<<" ";
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
map<pair<long long int,pair<long long int,long long int>>,long long int>mp;
long long int maxFunc(int n,vector<pair<long long int,long long int>>&vec,long long int s,long long int u)
{   //cout<<h[n]<<" ";
    if(n<0)
    return 0;
    if(mp.find({n,{s,u}})!=mp.end())
    return mp[{n,{s,u}}];
    if(s==0&&u==0)
    return mp[{n,{s,u}}]=max(vec[n].second+maxFunc(n-1,vec,vec[n].first,vec[n].second),maxFunc(n-1,vec,s,u));
    else if(vec[n].first<s&&vec[n].second<u)
    return mp[{n,{s,u}}]=max(vec[n].second+maxFunc(n-1,vec,vec[n].first,vec[n].second),maxFunc(n-1,vec,s,u));
    else
    return mp[{n,{s,u}}]=maxFunc(n-1,vec,s,u);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<pair<long long int,long long int>>vec;
        for(long long int i=0;i<n;i++)
        {long long int x,y;
        cin>>x>>y;
        vec.push_back({x,y});}
        sort(vec.begin(),vec.end());
        cout<<maxFunc(n-1,vec,0,0);
        cout<<"\n";
        mp.clear();
    }
}

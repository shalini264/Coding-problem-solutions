#include<bits/stdc++.h>
using namespace std;
int minkey(int dist[],vector<int>visited,int n)
{  int mini=INT_MAX,p=-1;
    for(int i=0;i<n;i++)
    {
        if(dist[i]<=mini&&visited[i]==0)
        {
            mini=dist[i];
            p=i;
        }
    }
    return p;
}
void minSpan(vector<pair<int,int>>vec[],int n)
{
    int dist[n];
    for(int i=0;i<n;i++)
    {dist[i]=1001;}
    dist[0]=0;
    vector<int>visited(n,0);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int u = minkey(dist,visited,n);
        if(u==-1)
        break;
        visited[u]=1;
        ans.push_back(u);
        for(int j=0;j<vec[u].size();j++)
        {
            if(vec[u][j].second<dist[vec[u][j].first]&&visited[vec[u][j].first]==0)
            dist[vec[u][j].first]=vec[u][j].second;
        }
    }
    int sum=0;
    for(auto it:ans)
    {sum+=dist[it];
    }
    cout<<sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>vec[n];
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        vec[x-1].push_back({y-1,w});
        vec[y-1].push_back({x-1,w});
    }
    minSpan(vec,n);
}

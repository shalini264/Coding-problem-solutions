//Program to print number of nodes at a particular level
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>vec[n+1];
    for(int i=1;i<=(n-1);i++)
    {
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    cin>>x;
    int level[n+1];
    vector<int>visited(n+1,0);
    queue<int>q;
    q.push(1);
    level[1]=1;
    visited[1]=1;
    while(!q.empty())
    {int u=q.front();
      q.pop();
      for(int i=0;i<vec[u].size();i++)
      {
        if(visited[vec[u][i]]==0)
        {   level[vec[u][i]]=level[u]+1;
            q.push(vec[u][i]);
            visited[vec[u][i]]=1;
        }
      }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(level[i]==x)
        {
            ans++;
        }
    }
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,float>p1,pair<int,float>p2)
{return (p1.second<p2.second);}
void DFSUtil(vector<pair<int,float>>vec[],int u,vector<int>&visited,int &x,float y)
{if(visited[u]==0)
  visited[u]=1;
 for(int i=0;i<vec[u].size();i++)
   {if(visited[vec[u][i].first]==0 && y<=vec[u][i].second)
     {y=vec[u][i].second;
     x++;
     DFSUtil(vec,vec[u][i].first,visited,x,y);}
     }}
int DFS(vector<pair<int,float>>vec[],int u,int n)
{vector<int>visited(n+1,0);
int x=1;
float y=vec[u][0].second;
DFSUtil(vec,u,visited,x,y);
return x;
}
int main()
{int T;
cin>>T;
while(T--)
{int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)
{cin>>a[i];}
vector<pair<int,float>>vec[n+1];
for(int i=1;i<n;i++)
{for(int j=i+1;j<=n;j++)
  {int u,v;
  float x;
  u=a[i];
  v=a[j];
  x=(j-i)/(float)(u-v);
  if(u>v)
   {vec[i].push_back({j,x});
   vec[j].push_back({i,x});}
   }}
for(int i=1;i<=n;i++)
 {
     sort(vec[i].begin(),vec[i].end(),comp);
 }
vector<int>vec1;
for(int i=1;i<=n;i++)
{if(vec[i].size()>0)
  {int k=DFS(vec,i,n);
  vec1.push_back(k);}
 else
 {
    vec1.push_back(1);
 }
 }
sort(vec1.begin(),vec1.end());
cout<<vec1[0]<<" "<<vec1[n-1]<<"\n";
}}



#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001][2];
void fun()
{
    for(int i=0;i<1001;i++)
    {
        for(int j=0;j<1001;j++)
        {
            dp[i][j][0]=dp[i][j][1]=-1;
        }
    }
}
int func1(int n,int m,vector<pair<char,pair<int,int>>>vec,int p=0)
{
for(int i=0;i<=n;i++)
{for(int j=0;j<=m;j++)
 {for(p=0;p<2;p++)
 {if(i==0||j==0)
   {dp[i][j][p]= 0;
   // dp[i][j][1]=0;
   }
 else if(p==1)
   {
    if(vec[i-1].second.first>j)
       dp[i][j][p]=dp[i-1][j][p];
    else
      dp[i][j][p]=max(vec[i-1].second.second+dp[i-1][j-vec[i-1].second.first][p],dp[i-1][j][p]);
   }
   else
   {if(vec[i-1].second.first>j)
     {
        if(((vec[i-1].second.first)/2)<=j)
       dp[i][j][p]=max(vec[i-1].second.second+dp[i-1][j-((vec[i-1].second.first)/2)][1],dp[i-1][j][p]);
    else
       dp[i][j][p]=dp[i-1][j][p];}
    else
      dp[i][j][p]=max(vec[i-1].second.second+dp[i-1][j-((vec[i-1].second.first)/2)][1],max(vec[i-1].second.second+dp[i-1][j-vec[i-1].second.first][p],dp[i-1][j][p]));}
    }
 }
}
return max(dp[n][m][0],dp[n][m][1]);}
int main()
{  
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);

freopen("output1.txt", "w", stdout);

#endif
  fun();
     int n,m;
    cin>>n>>m;
    vector<pair<char,pair<int,int>>>vec;
    for( int i=0;i<n;i++)
    {
        string s;
        char ch;
        int p,q;
        cin>>s>>ch>>p>>q;
        if(ch=='S')
        vec.push_back({ch,{p,q}});
    }
    int ans=func1(vec.size(),m,vec,0);
    cout<<ans;
}

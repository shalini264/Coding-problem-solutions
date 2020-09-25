#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{int n;
cin>>n;
long long int a[n][n];
for(long long int i=0;i<n;i++)
{for(long long int j=0;j<n;j++)
  cin>>a[i][j];}
long long int dp[n],sum=0;
for(long long int i=n-1;i>=1;i--)
 {if(a[0][i]>a[i][0])
    dp[i]=1;
  else
   dp[i]=0;}
 for(int i=1;i<n-1;i++)
  {if(dp[i]!=dp[i+1])
     sum++;}
   if(dp[n-1]==1)
     sum++;
    cout<<sum<<"\n";
  }}

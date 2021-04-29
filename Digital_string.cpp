#include<bits/stdc++.h>
using namespace std;
int dp[100001][6];
void fun()
{
	for(int i=0;i<100001;i++)
	{
		for(int j=0;j<6;j++)
		{
			dp[i][j]=0;
		}
	}
}
int func1(int n,int p[],int q[],int r[],int s[],int u)
{
	for(int i=1;i<=n;i++)
	{for(int j=0;j<6;j++)
	{if(j==0)
	{ dp[i][j]=min({p[i-1]+dp[i-1][2],q[i-1]+dp[i-1][3],r[i-1]+dp[i-1][4],s[i-1]+dp[i-1][5]});
	}
	else
	{
		if(j==2)
		{
			 dp[i][j]=min({q[i-1]+dp[i-1][3],r[i-1]+dp[i-1][4],s[i-1]+dp[i-1][5]});
		}
		else if(j==3)
		 dp[i][j]=min({p[i-1]+dp[i-1][2],r[i-1]+dp[i-1][4],s[i-1]+dp[i-1][5]});
		else if(j==4)
		 dp[i][j]=min({p[i-1]+dp[i-1][2],q[i-1]+dp[i-1][3],s[i-1]+dp[i-1][5]});
		else if(j==5)
		dp[i][j]=min({p[i-1]+dp[i-1][2],q[i-1]+dp[i-1][3],r[i-1]+dp[i-1][4]});
	}
}}
//cout<<dp[n][2]<<"<<"<<dp[n][3]<<"<<"<<dp[n][4]<<"<<"<<dp[n][5]<<"\n";
 return min({dp[n][2],dp[n][3],dp[n][4],dp[n][5]});}
int main()
{ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{  fun();
		int n;
		cin>>n;
		int p[n],q[n],r[n],s[n];
		for(int i=0;i<n;i++)
		cin>>p[i]>>q[i]>>r[i]>>s[i];
        cout<<func1(n,p,q,r,s,0)<<"\n";
	}
}

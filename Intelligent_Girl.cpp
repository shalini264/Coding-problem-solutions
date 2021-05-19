#include<bits/stdc++.h>
using namespace std;
int dp[10001]={0};
int main()
{
string s;
cin>>s;
for(int i=s.size()-1;i>=0;i--)
{
    if((s[i]-'0')%2==0)
      dp[i]=dp[i+1]+1;
    else
      dp[i]=dp[i+1];
}
for(int i=0;i<s.size();i++)
cout<<dp[i]<<" ";
}

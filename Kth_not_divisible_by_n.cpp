#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n,k,u,v;
cin>>n>>k;
u=k/(n-1);
 v=k%(n-1);
if(v==0)
cout<<(n*u)-1<<"\n";
else
cout<<(n*u)+v<<"\n";
}}

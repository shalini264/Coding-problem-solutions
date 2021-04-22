#include<bits/stdc++.h>
using namespace std;
int main()
{long long int T;
cin>>T;
while(T--)
{long long int n,p,q,r;
cin>>n;
int flag=0;
long long int a[n];
for(long long int i=0;i<n;i++)
cin>>a[i];
for(long long int i=0;i<(n-2);i++)
{if((a[i+1]>a[i])&&(a[i+1]>a[i+2]))
  {flag=1;
  p=i+1;
  q=i+2;
  r=i+3;
  break;}}
if(flag==0)
 cout<<"NO\n";
else
 {cout<<"YES\n";
 cout<<p<<" "<<q<<" "<<r<<" \n";}
 }
 }

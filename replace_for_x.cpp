#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n,x,p,k;
cin>>n>>x>>p>>k;
long long int a[n];
for(long long int i=0;i<n;i++)
  cin>>a[i];
sort(a,a+n);
if(((a[p-1]<x)&&(k>p))||((a[p-1]>x)&&(k<p)))
    cout<<"-1\n";
else if(a[p-1]==x)
    cout<<"0\n";
else if((k<=p)&&(a[p-1]<x))
{long long int u;
if(x>a[n-1])
  u=n+1;
else
 { for(int i=p;i<n;i++)
  {if(a[i]==x)
     {u=i+1;
      break;}
    else if(a[i]>x)
      {u=i+1;
      break;}
  }}
cout<<(u-p)<<"\n";}
else if((k>=p)&&(a[p-1]>x))
{long long int u;
if(x<a[0])
  u=0;
else
{for(int i=0;i<p;i++)
  {if(a[i]<=x)
     u=i+1;
   else
     break;}}
 cout<<(p-u)<<"\n";}
}}

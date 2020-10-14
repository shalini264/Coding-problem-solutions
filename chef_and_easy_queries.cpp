#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n,k,flag=0;
cin>>n>>k;
long long int a[n];
for(long long int i=0;i<n;i++)
{cin>>a[i];}
for(long long int i=1;i<n;i++)
{a[i]=a[i]+a[i-1];}
for(long long int i=0;i<n;i++)
{if(a[i]/k < (i+1))
  {cout<<(i+1)<<"\n";
   flag=1;
   break;}}
if(flag==0)
 {cout<<((a[n-1]/k)+1)<<"\n";}
}
}

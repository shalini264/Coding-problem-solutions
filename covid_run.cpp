#include<bits/stdc++.h>
using namespace std;
int find(long long int *a,long long int n,long long int k,long long int x,long long int y){
    if(x==y)
      return 1;
    if(a[x]==1)
      return 0;
    a[x]=1;
    return find(a,n,k,(x+k)%n,y);
}
int main()
{int T;
cin>>T;
while(T--)
{long long int n,k,x,y;
cin>>n>>k>>x>>y;
long long int a[n+1]={0};
a[x]=1;
if(y==x)
  cout<<"YES\n";
else
{x=((x+k)%n);
int flag=find(a,n,k,x,y);
 if(flag==1)
   cout<<"YES\n";
 else
  cout<<"NO\n";}
}
}

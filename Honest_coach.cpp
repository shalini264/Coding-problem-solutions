#include<bits/stdc++.h>
using namespace std;
int main()
{long long int T;
cin>>T;
while(T--)
{long long int n;
cin>>n;
long long int a[n];
for(long long int i=0;i<n;i++)
  cin>>a[i];
sort(a,a+n);
set<long long int>s;
for(long long int i=1;i<n;i++)
  {long long int k;
  k=a[i]-a[i-1];
  s.insert(k);}
auto it=s.begin();
cout<<*it<<"\n";
}}

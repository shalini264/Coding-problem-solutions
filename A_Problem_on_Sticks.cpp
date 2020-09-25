#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n;
cin>>n;
map<long long int,long long int>mp;
for(long long int i=0;i<n;i++)
 {long long int k;
 cin>>k;
 mp[k]++;}
 long long int n1=mp.size();
 if(mp[0]>=1)
 cout<<(n1-1)<<"\n";
else
 cout<<(n1)<<"\n";
}
}

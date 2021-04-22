#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n;
cin>>n;
vector<int>vec;
for(long long int i=0;i<n;i++)
{long long int k;
cin>>k;
k=k/100;
vec.push_back(k);}
long long int h=count(vec.begin(),vec.end(),2);
long long int r=count(vec.begin(),vec.end(),1);
long long int u=(2*h)+r;
if((u&1)||(n==1)||((h&1)&&(h==n)))
   cout<<"NO";
else
  cout<<"YES";}

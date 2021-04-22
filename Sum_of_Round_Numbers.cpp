#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{int n;
cin>>n;
vector<int>vec;
int k=1;
while(n)
{int t=n%10;
if(t!=0)
  vec.push_back(t*k);
k=k*10;
n=n/10;}
cout<<vec.size()<<"\n";
reverse(vec.begin(),vec.end());
for(auto it:vec)
  cout<<it<<" ";}
}

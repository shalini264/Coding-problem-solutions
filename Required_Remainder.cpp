#include<bits/stdc++.h>
using namespace std;
int main()
{long long int T;
cin>>T;
while(T--)
{long long int x,y,n;
cin>>x>>y>>n;
long long int q=n/x;
if(x*q+y<=n)
     cout<<((x*q)+y)<<"\n";
else
{
    cout<<((x*(q-1))+y)<<"\n";
}
}
}

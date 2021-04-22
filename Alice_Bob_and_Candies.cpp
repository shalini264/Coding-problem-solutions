#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n,a=0,b=0;
cin>>n;
list<long long int>li;
for(long long int i=0;i<n;i++)
 {long long int k;
 cin>>k;
 li.push_back(k);}
if(li.size()==1)
{a=li.front();
li.pop_front();
long long int sum=1;
cout<<sum<<" "<<a<<" "<<b<<"\n";}
else if(li.size()==2)
{a=li.front();
li.pop_front();
b=li.back();
li.pop_back();
long long int sum=2;
cout<<sum<<" "<<a<<" "<<b<<"\n";}
else
{
long long int sum=0;
long long int u1,v1;
u1=v1=0;
while(!li.empty())
{long long int u=0;
if((u<=v1)&&(!li.empty()))
{sum++;
while((u<=v1)&&(!li.empty()))
{u=u+li.front();
li.pop_front();}
a=a+u;}
u1=u;
long long int v=0;
if((v<=u1)&&(!li.empty()))
{sum++;
while((v<=u1)&&(!li.empty()))
{v=v+li.back();
li.pop_back();
}
b=b+v;}
v1=v;
}
cout<<sum<<" "<<a<<" "<<b<<"\n";
}
}}

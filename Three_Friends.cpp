#include<bits/stdc++.h>
using namespace std;
int main()
{long long int T;
cin>>T;
while(T--)
{vector<long long int>vec;
for(long long int i=0;i<3;i++)
  {long long int a;
  cin>>a;
  vec.push_back(a);}
sort(vec.begin(),vec.end());
if((vec[0]==vec[1])&&(vec[1]==vec[2]))
  cout<<"0\n";
else if((vec[0]==vec[1])||(vec[1]==vec[2]))
  {if(vec[0]==vec[1])
    {vec[2]=vec[2]-1;
    if(vec[0]!=vec[2])
    {vec[0]=vec[0]+1;
    vec[1]=vec[1]+1;}
    long long int sum=abs(vec[1]-vec[2])+abs(vec[0]-vec[2]);
    cout<<sum<<"\n";}
   else if(vec[1]==vec[2])
    {vec[0]=vec[0]+1;
    if(vec[0]!=vec[1])
    {vec[1]=vec[1]-1;
    vec[2]=vec[2]-1;}
    long long int sum=abs(vec[0]-vec[1])+abs(vec[0]-vec[2]);
    cout<<sum<<"\n";}
    }
else
  {vec[0]=vec[0]+1;
  vec[2]=vec[2]-1;
  long long int sum=abs(vec[0]-vec[1])+abs(vec[1]-vec[2])+abs(vec[0]-vec[2]);
  cout<<sum<<"\n";}
  }
  }

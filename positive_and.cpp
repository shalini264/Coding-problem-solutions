#include<bits/stdc++.h>
using namespace std;
bool exactPower(long long int x){
    return x && (!(x&(x-1)));
}
int main()
{int T;
cin>>T;
while(T--){
    long long int n;
    cin>>n;
    if(n==1) 
      cout<<"1\n";
    else if(n==2)
     cout<<"-1\n";
    else if(exactPower(n))
     cout<<"-1\n";
    else
    {long long int a[n+1];
    for(long long int i=1;i<=n;i++)
        a[i]=i;
    a[1]=2;
    a[2]=3;
    a[3]=1;
    long long int i=2;
    while(((1<<i)<=n)&&(((1<<(i))+1)<=n))
    {swap(a[1<<i],a[(1<<(i))+1]);
        i++;
    }
    for(long long int i=1;i<=n;i++)
     cout<<a[i]<<" ";
    cout<<"\n";
}}}

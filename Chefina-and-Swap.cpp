#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int T;
cin>>T;
while(T--)
{long long int n,sum=0;
cin>>n;
long long int sum1=(((n)*(n+1))>>1);
if(sum1&1)
{cout<<"0\n";
continue;
}
long long int x,diff,avg;
avg=sum1/2;
long double d;
d=sqrt(1+8*(avg));
x=((long long int)d - 1)/2;
if(d-floor(d)==0)
   cout<<((((x)*(x-1))/2)+(((n-x)*(n-x-1))/2)+(n-x))<<"\n";
else
   cout<<(n-x)<<"\n";
}
    
}

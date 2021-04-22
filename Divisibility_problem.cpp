#include<bits/stdc++.h>
using namespace std;
int main()
{long long int T;
cin>>T;
while(T)
{long long int a,b,x;
cin>>a>>b;
if(a>=b)
    {if(a%b==0)
       x=0;
     else
     {x=a%b;
     x=b-x;}}
else
    x=b-a;
cout<<x<<"\n";
T--;}
return 0;}

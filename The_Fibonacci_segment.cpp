#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
      {
          cout<<"1";
          return 0;
      }
    long long int ans,p;
    ans=p=2;
    for(int i=0;i<(n-2);i++)
    {
        if(a[i]+a[i+1]==a[i+2])
        {
            p++;
        }
        else
        {
            ans=max(ans,p);
            p=2;
        }
    }
    ans=max(ans,p);
    cout<<ans;
}

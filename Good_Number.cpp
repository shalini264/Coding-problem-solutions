#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ans=0;
    cin>>n>>k;
    while(n--)
    {
        string s;
        cin>>s;
        long long int flag=1;
        for(int i=0;i<=k;i++)
        {
            if(find(s.begin(),s.end(),i+'0')==s.end())
            {
                flag=0;
                break;
            }
        }
        ans+=flag;
    }
    cout<<ans;
}

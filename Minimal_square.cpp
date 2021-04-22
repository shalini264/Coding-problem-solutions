#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,mini,maxi,temp;
        cin>>a>>b;
        mini=min(a,b);
        maxi=max(a,b);
        temp=max(2*mini,maxi);
        cout<<temp*temp<<"\n";

    }
}

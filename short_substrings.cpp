#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        string s,s1;
        cin>>s;
        s1.push_back(s[0]);
        s1.push_back(s[1]);
        for(long long int i=3;i<s.size();i=i+2)
            s1.push_back(s[i]);
        cout<<s1<<"\n";
    }
}

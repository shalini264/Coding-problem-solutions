#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int u1=0;
    for(auto it:s)
    {
        string s1=bitset<8>((int)it).to_string();
        //cout<<s1<<"\n";
        reverse(s1.begin(),s1.end());
        int u = stoi(s1,0,2);
        int x=(256+u1-u)%256;
        u1=u;
        cout<<x<<"\n";
    }
    
}

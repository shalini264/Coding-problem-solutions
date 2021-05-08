#include<bits/stdc++.h>
using namespace std;
vector<int>a;
vector<int>tail;
int ceilVal(int start,int end,int val)
{   int mid;
    while(end-start>1)
    {
        mid=start+(end-start)/2;
        if(tail[mid]>=val)
           end=mid;
        else
           start=mid;
    }
    return end;
}
int incFun(int n)
{   if(n==1)
     return 1;
    tail.resize(n);
    tail[0]=a[0];
    int length=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<tail[0])
        {tail[0]=a[i];}
        else if(a[i]>tail[length-1])
        {
            tail[length++]=a[i];
        }
        else
          tail[ceilVal(0,length-1,a[i])]=a[i];}
              return length;
}
int main()
{  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n,sum=0;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans1=n-incFun(n);
    reverse(a.begin(),a.end());
    int ans2=n-incFun(n);
    cout<<min(ans1,ans2);
}

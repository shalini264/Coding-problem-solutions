#include <bits/stdc++.h>
using namespace std;
int minmaxDiff(int a[],int n,int k)
{
    sort(a,a+n);
    int mini=a[0]+k;
    int maxi = a[n-1]-k;
    int ans = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        mini = min(mini,a[i+1]-k);
        maxi = max(maxi,a[i]+k);
        if(mini<0)
        continue;
        ans = min(ans,maxi-mini);
    }
    return ans;
}
int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cout<<minmaxDiff(a,n,k);
}

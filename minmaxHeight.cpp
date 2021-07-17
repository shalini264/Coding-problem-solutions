// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int val1=arr[0]+k;
        int val2=arr[n-1]-k;
        int ans=arr[n-1]-arr[0];
        int mini,maxi;
        for(int i=1;i<n;i++)
        {
            mini=min(val1,arr[i]-k);
            maxi=max(val2,arr[i-1]+k);
            if(mini<0)
            continue;
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends

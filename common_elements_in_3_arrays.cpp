// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector<int> intersection(int a[],int b[],int n,int m)
       {
           vector<int>temp;
           int i=0,j=0;
           while(i<n&&j<m)
           {
               if(a[i]>b[j])
               {
                   j++;
               }
               else if(b[j]>a[i])
               {
                   i++;
               }
               else
               {
                   temp.push_back(a[i]);
                   i++;
                   j++;
               }
           }
           return temp;
       }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>ans;
            ans=intersection(A,B,n1,n2);
            int n=ans.size();
            int *c=&ans[0];
            ans=intersection(c,C,n,n3);
            ans.erase(unique(ans.begin(),ans.end()),ans.end());
            return ans;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends

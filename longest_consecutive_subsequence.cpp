// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {  sort(arr,arr+N);
       int sum=1,ans=1;
       for(int i=0;i<N-1;i++)
       {
           if(arr[i+1]-arr[i]==1)
           {
               sum++;
           }
           else if(arr[i+1]-arr[i]!=0)
           {
            ans=max(ans,sum);
            sum=1;
           }
       }
       if(sum>1)
       ans=max(ans,sum);
       return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends

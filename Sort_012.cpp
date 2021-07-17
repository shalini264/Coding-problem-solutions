// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int count0=count(a,a+n,0);
        int count1=count(a,a+n,1);
        int count2=count(a,a+n,2);
        for(int i=0;i<n;i++)
        {
            if(count0>0)
            {
                a[i]=0;
                count0--;
            }
            else if(count1>0)
            {
                a[i]=1;
                count1--;
            }
            else
            {
                a[i]=2;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends

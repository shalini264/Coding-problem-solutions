class Solution {
public:
    int jump(vector<int>& nums) {
        int l,r,ans,n;
        n=nums.size();
        l=r=ans=0;
        while(r<n-1)
        {   int maxi=INT_MIN;
            for(int i=l;i<=r;i++)
            {
                maxi=max(maxi,i+nums[i]);
            }
            l=r+1;
            r=maxi;
            ans++;
        }
        return ans;
    }
};

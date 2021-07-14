class Solution {
public:
    void generatePerm(vector<int>&nums,int i,int n,vector<vector<int>>&ans)
    {
        if(i==n)
        {  ans.push_back(nums);
            return;}
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            generatePerm(nums,i+1,n,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        generatePerm(nums,0,nums.size(),ans);
        return ans;
    }
};

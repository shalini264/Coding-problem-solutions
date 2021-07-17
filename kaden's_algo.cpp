class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int p=nums[0],q=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            p=max(p+nums[i],nums[i]);
            q=max(p,q);
        }
        return q;
    }
};

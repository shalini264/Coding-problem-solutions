class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_val,max_val,ans;
        min_val=max_val=ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {  int temp=max_val;
           max_val=max({nums[i],nums[i]*max_val,min_val*nums[i]});
           min_val=min({nums[i],nums[i]*temp,min_val*nums[i]});
           ans=max(ans,max_val);
        }
        return ans;
    }
};

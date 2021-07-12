class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1)          //If there is only one element,no need to jump
            return true;
        else if(nums[0]==0)   //if we cant jump from first position,its impossible to reach the last index
            return false;
        int maxi=0;
        for(int i=0;i<n;i++)
        {   if(maxi<i)
             return false;
            maxi=max(maxi,i+nums[i]);
            if(maxi>=n-1)
                return true;
        }
        return true;
    }
};

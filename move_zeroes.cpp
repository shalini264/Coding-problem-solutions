class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int count0=count(nums.begin(),nums.end(),0);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                nums.push_back(nums[i]);
        }
        for(int i=0;i<count0;i++)
            nums.push_back(0);
        nums.erase(nums.begin(),nums.begin()+n);
    }
};

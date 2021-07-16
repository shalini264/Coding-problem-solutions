class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i=0;i<(int)pow(2,n);i++)
        {  vector<int>vec;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                    vec.push_back(nums[j]);
            }
          sort(vec.begin(),vec.end());
         if(find(ans.begin(),ans.end(),vec)==ans.end())
             ans.push_back(vec);
        }
        return ans;
    }
};

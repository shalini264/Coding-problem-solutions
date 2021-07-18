class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>vec;
        for(int i=0;i<n-1;i++)
        {
            
            int j=i+1,k=n-1;
            if(i==0||nums[i]!=nums[i-1])
            {while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    
                    vec.push_back(nums[i]);
                    vec.push_back(nums[j]);
                    vec.push_back(nums[k]);
                      if(!binary_search(ans.begin(),ans.end(),vec))
                        ans.push_back(vec);
                    j++;
                    k--;
                    vec.clear();
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }}
        return ans;
        
    }
};

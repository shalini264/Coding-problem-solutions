class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>vec;
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++)
        {   if(i==0||nums[i]!=nums[i-1])
        {for(int j=i+1;j<n;j++)
            {int k=j+1,m=n-1;
                while(k<m)
                {
                    int sum=nums[i]+nums[j]+nums[k]+nums[m];
                    if(sum==target)
                    {
                         vec.push_back(nums[i]);   
                         vec.push_back(nums[j]);   
                         vec.push_back(nums[k]);   
                         vec.push_back(nums[m]);   
                        if(!binary_search(ans.begin(),ans.end(),vec))
                        {
                            ans.push_back(vec);
                        }
                        k++;
                        m--;
                        vec.clear();
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        m--;
                    }
                }
            }}
        }
        return ans;
    }
};

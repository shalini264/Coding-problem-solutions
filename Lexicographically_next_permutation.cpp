class Solution {
public:
    int binary_search(vector<int>nums,int start,int end,int x)
    {   int index = -1;
        while(start<=end)
        {  int mid=start+(end-start)/2;
            if(nums[mid]>x)
            {
                start=mid+1;
                if(index==-1||nums[index]>nums[mid])
                {
                    index=mid;
                }
            }
            else if(nums[mid]<=x)
                end=mid-1;
        }
        return index;
    }
    void nextPermutation(vector<int>& nums) {
            int temp=0;
            int n = nums.size();
            for(int i=n-2;i>=0;i--)
            {
                if(nums[i]<nums[i+1])
                {  int p=binary_search(nums,i+1,n-1,nums[i]);
                   swap(nums[i],nums[p]);
                   sort(nums.begin()+i+1,nums.end());
                   temp=1;
                   break;
                }
                
            }
           if(temp==0)
               reverse(nums.begin(),nums.end());
        }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++)
        {
            if(ans.size()==0)
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                int u=ans.size();
                if(intervals[i][0]>=ans[u-1][0]&&intervals[i][0]<=ans[u-1][1])
                {
                    ans[u-1][0]=min(intervals[i][0],ans[u-1][0]);
                    ans[u-1][1]=max(intervals[i][1],ans[u-1][1]);
                }
                else
                    ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int overlapp(int p,int q)
    {
        if(q<=p)
            return 1;
        return 0;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        cout.tie(NULL);
        sort(intervals.begin(),intervals.end());
        vector<int>visited(intervals.size(),0);
         for(int i=0;i<intervals.size()-1;i++)
         {  
              if(visited[i]==1||visited[i+1]==1)
                   continue;
                 if(overlapp(intervals[i][1],intervals[i+1][0]))
                 {visited[i]=1;
                     int p=max(intervals[i][1],intervals[i+1][1]);
                     intervals[i+1][0]=intervals[i][0];
                     intervals[i+1][1]=p;
                 }
             
         }
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++)
        {   if(visited[i]==0)
        {
            ans.push_back(intervals[i]);}
        }
        return ans;
    }
};

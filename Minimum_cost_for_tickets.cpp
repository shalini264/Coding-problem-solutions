class Solution {
public:
    int dp[366];
    int minCost(vector<int>& days,vector<int>& cost,int i)
    {
        if(i>days[days.size()-1])
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        if(find(days.begin(),days.end(),i)==days.end())
            return dp[i]=minCost(days,cost,i+1);
        else
        return dp[i]=min({cost[0]+minCost(days,cost,i+1),cost[1]+minCost(days,cost,i+7),cost[2]+minCost(days,cost,i+30)});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        return minCost(days,costs,days[0]);
    }
};

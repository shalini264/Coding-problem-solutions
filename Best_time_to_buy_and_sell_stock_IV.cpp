class Solution {
public:
    map<pair<int,pair<int,int>>,int>mp;
    int maxFunc(vector<int>&prices,int k,int u,int mini,int times)
    {
        if(times==k)
            return 0;
        if(u>=prices.size())
            return 0;
        if(mp.find({u,{mini,times}})!=mp.end())
            return mp[{u,{mini,times}}];
        if(prices[u]<=mini)
            return mp[{u,{mini,times}}]=maxFunc(prices,k,u+1,min(mini,prices[u]),times);
        else
        {   if(u<prices.size()-2)
            return mp[{u,{mini,times}}]=max(prices[u]-mini+maxFunc(prices,k,u+2,prices[u+1],times+1),maxFunc(prices,k,u+1,min(mini,prices[u]),times));
         else
             return mp[{u,{mini,times}}]=max(prices[u]-mini+maxFunc(prices,k,u+2,0,times+1),maxFunc(prices,k,u+1,min(mini,prices[u]),times));
             
    }}
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size()==0||prices.size()==1)
            return 0;
        return maxFunc(prices,k,1,prices[0],0);
    }
};

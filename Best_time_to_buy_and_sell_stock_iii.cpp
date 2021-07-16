class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int left[n],right[n],p=0,mini=prices[0],profit=0;
        left[0]=0;
        for(int i=1;i<n;i++)
        {
          p=max(p,prices[i]-mini);
            left[i]=p;
            mini=min(mini,prices[i]);
        }
        right[n-1]=0;
        p=0;
        mini=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
         p=max(p,mini-prices[i]);
            right[i]=p;
            mini=max(mini,prices[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            profit=max(profit,left[i]+right[i+1]);
        }
        profit=max(left[n-1],profit);
        return profit;
    }
};

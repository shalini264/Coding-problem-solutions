int Solution::numDistinct(string A, string B) {
    int n=A.size(),m=B.size();
    if(m>n)
    return 0;
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {   if(j==0)
            dp[i][j]=1;
            else if(i==0)
            dp[i][j]=0;
            else if(A[i-1]!=B[j-1])
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        }
    }
    return dp[n][m];
}

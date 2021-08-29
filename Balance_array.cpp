int Solution::solve(vector<int> &A) {
int n = A.size();
int prefo[n],prefe[n],sum=0;
for(int i=0;i<n;i++)
     {
         if(i==0)
         {prefo[i]=A[i];
          prefe[i]=0;}
         else if(i==1)
         {prefe[i]=A[i];
          prefo[i]=prefo[i-1];}
         else if(i%2==0)
         {prefo[i]=A[i]+prefo[i-1];
         prefe[i]=prefe[i-1];}
         else
         {prefe[i]=A[i]+prefe[i-1];
         prefo[i]=prefo[i-1];}
     }
for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        if(prefo[i]-A[i]+prefe[n-1]-prefe[i]==prefe[i]+prefo[n-1]-prefo[i])
        {  
            sum++;
        }
    }
    else
    {
     if(prefe[i]-A[i]+prefo[n-1]-prefo[i]==prefo[i]+prefe[n-1]-prefe[i])
        {
            sum++;
        }   
    }
}
return sum;
}

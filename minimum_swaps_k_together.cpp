int minSwap(int *arr, int n, int k) {
    int count0=0,ans,temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            count0++;
        }
    }
    for(int i=0;i<count0;i++)
       {
           if(arr[i]>k)
              temp++;
       }
    ans=temp;
    int i=0,j=count0;
    while(j<n)
    {   if(arr[i]>k)
          {
              temp--;
          }
        if(arr[j]>k)
           {
               temp++;
           }
        i++;
        j++;
        ans=min(ans,temp);
    }
    return ans;
    
}

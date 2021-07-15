int ans=0;
void merge1(vector<int>&a,int l,int m,int r)
{    //ans=0;
    int n1=m-l+1;
    int n2=r-m;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
        x[i]=a[l+i];
    for(int j=0;j<n2;j++)
        y[j]=a[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(x[i]<=y[j])
        {
        a[k]=x[i];
        i++;
        }
        else
        {   ans+=(n1-i);
            a[k]=y[j];
            j++;
        }
        k++;

    }
    while(i<n1)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
void merge_sort(vector<int>&a,int l,int r)
{
if(l>=r)
    return;
int m = l+(r-l)/2;
merge_sort(a,l,m);
merge_sort(a,m+1,r);
merge1(a,l,m,r);
}
int Solution::countInversions(vector<int> &a) {
    int n=a.size();
    ans=0;
    merge_sort(a,0,n-1);
       return ans;
}

#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
    {
        x[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        y[j]=a[m+j+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k]=x[i];
            i++;
        }
        else
        {
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
void merge_sort(int a[],int l,int r)
{   if(l>=r)
      return;
        int mid = l+(r-l)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    cin>>a[i];
    merge_sort(a,0,9);
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
}

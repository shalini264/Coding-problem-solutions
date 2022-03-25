#include<bits/stdc++.h>
using namespace std;
int countMax(int i,int j,int r,int c,vector<int>vec[],vector<int>temp[])
{  
    if(i<0||j<0||i>=r||j>=c)
    return 0;
    if(vec[i][j]==1&&temp[i][j]==0)
    {
        temp[i][j]=1;
        return 1+countMax(i+1,j,r,c,vec,temp)+countMax(i,j+1,r,c,vec,temp)+countMax(i+1,j+1,r,c,vec,temp)+countMax(i-1,j,r,c,vec,temp)+countMax(i,j-1,r,c,vec,temp)+countMax(i-1,j-1,r,c,vec,temp)+countMax(i+1,j-1,r,c,vec,temp)+countMax(i-1,j+1,r,c,vec,temp);
        // if(vec[i][j]==1)
        // return max({1+countMax(i+1,j,r,c,vec,temp),1+countMax(i,j+1,r,c,vec,temp),1+countMax(i+1,j+1,r,c,vec,temp),1+countMax(i-1,j,r,c,vec,temp),1+countMax(i,j-1,r,c,vec,temp),1+countMax(i-1,j-1,r,c,vec,temp));
        // else
        // return max(countMax(i+1,j,r,c,vec,temp),countMax(i,j+1,r,c,vec,temp),countMax(i+1,j+1,r,c,vec,temp),countMax(i-1,j,r,c,vec,temp),countMax(i,j-1,r,c,vec,temp),countMax(i-1,j-1,r,c,vec,temp)});
        
        
    }
    else
    return 0;
    
}    
int main()
{
    int T,i=1;
    cin>>T;
    while(i<=T)
    {
        int r,c;
        cin>>r>>c;
        vector<int>vec[r];
        vector<int>temp[r];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {   int u;
               
                cin>>u;
                vec[i].push_back(u);
                temp[i].push_back(0);
            }
        }
        int maxi=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {   if(temp[i][j]==0&&vec[i][j]==1)
                maxi=max(maxi,countMax(i,j,r,c,vec,temp));
                
            }
            
        }
       cout<<"#"<<i<<" "<<maxi<<"\n";
       i++;
    }
}

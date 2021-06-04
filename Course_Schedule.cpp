class Solution {
public:
    void DFSUtil(vector<int>vec[],int u,vector<int>&visited,bool &flag)
    {  
        for(int i=0;i<vec[u].size();i++)
        {   if(visited[vec[u][i]]==0)
        {  visited[vec[u][i]]=2;
            DFSUtil(vec,vec[u][i],visited,flag);
           visited[vec[u][i]]=1;
        }
         else if(visited[vec[u][i]]==2)
         {
             flag=true;
             return;
         }
         }
    
    }
    bool DFS(vector<int>vec[],int n)
    {
        vector<int>visited(n,0);
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            visited[i]=2;
            DFSUtil(vec,i,visited,flag);
            if(flag==true)
            return false;
            visited[i]=1;
        }
        return true;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>vec[n];
        for(int i=0;i<p.size();i++)
        {
            vec[p[i][0]].push_back(p[i][1]);
        }
        return DFS(vec,n);
        
    }
};

//Detect cycle and implement topological sort
class Solution {
public:
    void DFSUtil(vector<int>vec[],int u,vector<int>&visited,bool &flag)
    { 
        for(int i=0;i<vec[u].size();i++)
        {
            if(visited[vec[u][i]]==0)
            {
                visited[vec[u][i]]=2;
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
    bool detectCycle(vector<int>vec[],int n)
    {
        vector<int>visited(n,0);
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            visited[i]=2;
            DFSUtil(vec,i,visited,flag);
            if(flag==true)
                return flag;
            visited[i]=1;
        }
        return false;
    }
    void newFunc(vector<int>vec[],int u,vector<int>&ans,vector<int>&visited)
    {
        for(int i=0;i<vec[u].size();i++)
        {
            if(visited[vec[u][i]]==0)
            {
                visited[vec[u][i]]=1;
                newFunc(vec,vec[u][i],ans,visited);
                ans.push_back(vec[u][i]);
            }
        }
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        if(p.size()==1&&n==2)
        {  reverse(p[0].begin(),p[0].end());
            return p[0];
        }
        vector<int>ans;
        vector<int>vec[n];
        for(int i=0;i<p.size();i++)
        {
            vec[p[i][0]].push_back(p[i][1]);
        }
        if(detectCycle(vec,n))
        {
            return ans;}
        else
        {  vector<int>visited(n,0);
            for(int i=0;i<n;i++)
            {  if(visited[i]==0)
            {visited[i]=1;
                newFunc(vec,i,ans,visited);
            ans.push_back(i);}
            }
         return ans;
        }
    }
};

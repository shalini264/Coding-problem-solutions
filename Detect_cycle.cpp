
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    void DFSUtil(vector<int>vec[],int u,vector<int>visited,bool &flag)
    {
        for(int i=0;i<vec[u].size();i++)
        {
            if(visited[vec[u][i]]==1)
             visited[vec[u][i]]=2;
            else if(visited[vec[u][i]]==0)
             {visited[vec[u][i]]=1;
                return DFSUtil(vec,vec[u][i],visited,flag);
              visited[vec[u][i]]=0;
             }
            else
            {
              flag=true;
              return;
            }
        }
            }
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int>visited(V+1,0);
	    bool flag=false;
	    for(int i=0;i<V;i++)
	    {
	        visited[i]=1;
	        DFSUtil(adj,i,visited,flag);
	        if(flag==true)
	        return true;
	    }
	    return false;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  

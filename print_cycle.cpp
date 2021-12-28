//print cycle in undirected graph
#include<bits/stdc++.h>
using namespace std;
void DFSUtil(vector<int>vec[],int u,vector<int>visited,bool &flag,vector<int>v1)
    {
        for(int i=0;i<vec[u].size();i++)
        {
            if(visited[vec[u][i]]==1)
             visited[vec[u][i]]=2;
            else if(visited[vec[u][i]]==0)
             {visited[vec[u][i]]=1;
              v1.push_back(vec[u][i]);
                return DFSUtil(vec,vec[u][i],visited,flag,v1);
                v1.pop_back();
              visited[vec[u][i]]=0;
             }
            else
            {cout<<"val is:"<<vec[u][i]<<"\n";
            int x=0;
             for(auto it:v1)
             {
                 if(it!=vec[u][i])
                 x++;
                 else
                 break;
             }
             reverse(v1.begin(),v1.end());
             while(x--)
             {
                 v1.pop_back();
             }
             reverse(v1.begin(),v1.end());
            for(auto it:v1)
              cout<<it<<" ";
              cout<<"\n";
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
	    {   vector<int>v1;
	        v1.push_back(i);
	        visited[i]=1;
	        DFSUtil(adj,i,visited,flag,v1);
	        if(flag==true)
	        return true;
	        else
	        {
	            visited[i]=0;
	            v1.pop_back();
	        }
	    }
	    return false;
	}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>vec[n+1];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    cout<<isCycle(n,vec);
}

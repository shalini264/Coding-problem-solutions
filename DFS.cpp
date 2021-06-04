/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
void DFSUtil(vector<int>vec[],int n,int u,vector<int>&visited)
{
    if(visited[u]==0)
    visited[u]=1;
    for(int i=0;i<vec[u].size();i++)
    {
        if(visited[vec[u][i]]==0)
        {
            DFSUtil(vec,n,vec[u][i],visited);
        }
    }
}
void DFS(vector<int>vec[],int n,int x)
{
vector<int>visited(n+1,0);
DFSUtil(vec,n,x,visited);
cout<<count(visited.begin(),visited.end(),0)-1;
}
int main()
{
    int n,m,x;
    cin>>n>>m;
    vector<int>vec[n+1];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    cin>>x;
    DFS(vec,n,x);
}

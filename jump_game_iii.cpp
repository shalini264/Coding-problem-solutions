class Solution {
public:
    map<int,bool>mp;
    bool check(vector<int>&arr,int start,vector<int>&visited)
    { if(start>=arr.size()||start<0)
        return false;
      if(mp.find(start)!=mp.end())
          return mp[start];
      if(arr[start]==0&&visited[start]==0)
      {visited[start]=1;
       return mp[start]=true;}
      else if(visited[start]==0&&arr[start]!=0)
      {visited[start]=1;
          return mp[start]=check(arr,start+arr[start],visited)|check(arr,start-arr[start],visited);}
       return false;
    }
    bool canReach(vector<int>& arr, int start) {
        if(find(arr.begin(),arr.end(),0)==arr.end())
            return false;
        int n=arr.size();
        vector<int>visited(n,0);
        return check(arr,start,visited);
    }
};

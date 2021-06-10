//using trie
class Solution {
public:
    struct Trie{
        int we;
        Trie *s[26];
    };
    Trie* newNode()
    {
        Trie *T = new Trie;
        T->we=0;
        for(int i=0;i<26;i++)
            T->s[i]=NULL;
        return T;
    }
    void createNode(Trie* root,string s)
    {
        Trie *temp = root;
        for(int i=0;i<s.size();i++)
        {
            int u=s[i]-'a';
            if(temp->s[u]==NULL)
                temp->s[u]=newNode();
            temp=temp->s[u];
        }
        temp->we+=1;
    }
    
    bool search(Trie* root,string s)
    {
        Trie *temp= root;
        for(int i=0;i<s.size();i++)
        {
            int u=s[i]-'a';
            if(temp->s[u]==NULL)
                return false;
            temp=temp->s[u];
        }
        if(temp!=NULL&&temp->we>=1)
            return true;
         return false;
    }
    map<string,bool>mp;
    bool function(string s,Trie* root)
    {  if(s.size()==0)
        return true;
        if(mp.find(s)!=mp.end())
            return mp[s];
        for(int k=1;k<=s.size();k++)
        {
            if(search(root,s.substr(0,k))&&function(s.substr(k,s.size()-k),root))
                return mp[s]=true;
        }
     return mp[s]=false;     
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        Trie* root = newNode();
        for(auto it:wordDict)
        {
            createNode(root,it);
        }
        
        return function(s,root);
            
        
    }
};

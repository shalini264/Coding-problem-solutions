#include<bits/stdc++.h>
using namespace std;
struct Trie{
    int endNode;
    Trie *next[26];
};
Trie* getNode()
{
    Trie *root = new Trie();
    root->endNode=0;
    for(int i=0;i<26;i++)
    {
        root->next[i]=NULL;
    }
    return root;
}
void insert(Trie *root,string s)
{   Trie *node = root;
    for(int i=0;i<s.size();i++)
    {
        int u=s[i]-'a';
        if(node->next[u]==NULL)
        {
            node->next[u]=getNode();
        }
        node=node->next[u];
    }
    node->endNode+=1;
}
bool search(Trie *root,string s)
{
    Trie *node = root;
    for(int i=0;i<s.size();i++)
    {int u=s[i]-'a';
        if(node->next[u]==NULL)
        return false;
         node=node->next[u];   
    }
    if((node!=NULL)&&((node->endNode)>=1))
    return true;
    else
    return false;
}
int main()
{
    
    Trie *root = getNode();
    for(int i=0;i<5;i++)
    {string s;
    cin>>s;
    insert(root,s);}
    for(int i=0;i<5;i++)
    {string x;
    cin>>x;
        if(search(root,x))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
}

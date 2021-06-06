bool findWord(string s,string s1)
    {
        int u=0;
        for(auto it:s)
        {
            if(s1[u]==it)
            {
                u+=1;
            }
            else
            {
                if(u>0)
                {
                    if(s1[u-1]!=it)
                        u=0;
                }
            }
            if(u==s1.size())
                return true;
        }
        return false;
    }

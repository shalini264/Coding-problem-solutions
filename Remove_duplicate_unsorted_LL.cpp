Node * removeDuplicates( Node *head) 
    {
      map<int,int>mp;
      Node *nptr = head;
      mp[nptr->data]++;
      while(nptr->next!=NULL)
      {
          if(mp.find(nptr->next->data)!=mp.end())
          {
              nptr->next = nptr->next->next;
              
          }
          else
          {
              mp[nptr->next->data]++;
              nptr=nptr->next;
          }
      }
      return head;
    }

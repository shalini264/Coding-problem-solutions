int intersectPoint(Node* head1, Node* head2)
{   map<Node*,int>mp;
    for(Node* n1 = head1;n1!=NULL;n1=n1->next)
    {  mp[n1]++;
    }
    for(Node* n2 = head2;n2!=NULL;n2=n2->next)
        {
            if(mp.find(n2)!=mp.end())
            {
                return n2->data;
            }
        }
    
    
}

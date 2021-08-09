class NumArray {
public:
    vector<int>st,arr;
    int n;
    void buildTree(int si,int ss,int se)
    {
        if(ss==se)
        {
            st[si]=arr[ss];
            return; 
        }
        int mid = (ss+(se-ss)/2);
        buildTree(si*2 + 1,ss,mid);
        buildTree(si*2 + 2,mid+1,se);
        st[si]=st[si*2 +1]+st[si*2 + 2];
    }
    void temp_date(int si,int ss,int se,int index,int val)
    {
        if(ss==se)
        {
            st[si]=val;
            return;
        }
        int mid = ss+(se-ss)/2;
        if(index<=mid)
        temp_date(2*si+1,ss,mid,index,val);
        else
        temp_date(2*si+2,mid+1,se,index,val);
        st[si]=st[2*si+1]+st[2*si+2];
        
    }
    int query(int si,int ss,int se,int left,int right)
    {
        if(ss>right||se<left)
            return 0;
        if(left<=ss&&right>=se)
            return st[si];
        int mid = (ss+(se-ss)/2);
        int l = query(si*2+1,ss,mid,left,right);
        int r = query(si*2+2,mid+1,se,left,right);
        return l+r;
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        arr = nums;
        st.resize(n*4,0);
        buildTree(0,0,n-1);
    }
    
    void update(int index, int val) {
        temp_date(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */

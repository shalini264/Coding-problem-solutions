int multiply(vector<int>&vec,int x,int siz_)
    {
        long long int p=0;
        for(int i=0;i<siz_;i++)
        {
            long long int product=vec[i]*x+p;
            p=product/10;
            vec[i]=product%10;
        }
        while(p)
        {
            vec.push_back(p%10);
            p=p/10;
            siz_++;
        }
        return siz_;
    }
    vector<int> factorial(int N){
        vector<int>vec;
        vec.push_back(1);
        int siz_=1;
        for(int x=2;x<=N;x++)
        {
            siz_=multiply(vec,x,siz_);
        }
        return vec;
    }

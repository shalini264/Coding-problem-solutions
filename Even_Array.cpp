#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,sum1=0,sum2=0;
        cin>>n;
        vector<long long int>vec;
        for(long long int i=0;i<n;i++)
        { long long int k;
        cin>>k;
        if(k%2==0)
            sum1++;
        else
            sum2++;
        vec.push_back(k);
        }
        for(long long int i=0;i<n;i++)
        {
            if(i%2==vec[i]%2)
            {
                if(i%2==0)
                    sum1--;
                else
                    sum2--;
            }
        }
        if(sum1==sum2)
            cout<<sum1<<"\n";
        else
            cout<<"-1\n";


    }
}

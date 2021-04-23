#include <bits/stdc++.h>

    using namespace std;

    int main()
    {  
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        long long int n, m,ans=0;

        //Obtaining input for number of elements and number of queries
        cin >> n >> m;
        long long int a[n],temp[n];
        //Forming the array a
        for(long long int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        memset(temp,0,sizeof(temp));
        for(long long int i=0;i<m;i++){
            long long int start, end,d;
            cin >> start >> end;
            start-=1;
            end-=1;
            d=1;
            temp[start] += d;
            temp[end+1] -= d;
        }

        for(long long int i=1;i<n;i++){
            temp[i] += temp[i-1];
        }
        sort(temp,temp+n);
        for(long long int i=n-1;i>=0;i--){
            if(temp[i]!=0)
            ans+=(temp[i]*a[i]);
            else
            break;
        }

        cout<<ans;

        return 0;
    }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,x,y,a;
    while(cin>>k)
    {
        vector<pair<int,int>>v;
        for(long long i=k+1;i<=k*2;i++)
        {
            y=i;
            x=(k*y)/(y-k);
            if((k*y)%(y-k)==0)
            {
                v.push_back(make_pair(x,y));
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            printf("1/%lld = 1/%d + 1/%d\n",k,v[i].first,v[i].second);
    }
}

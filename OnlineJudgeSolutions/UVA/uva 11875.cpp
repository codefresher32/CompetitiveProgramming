#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        printf("Case %d: %d\n",x,v[n/2]);
        x++;
        v.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1005]={0};
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>a[i];
    int x;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int c[1005]={0};
        x=i;
        c[x]++;
        while(true)
        {
            if(c[a[x]]>0)
            {
                v.push_back(a[x]);
                break;
            }
            c[a[x]]++;
            x=a[x];
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}

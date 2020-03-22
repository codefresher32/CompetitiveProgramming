#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,a[3001]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k=0,l;
    vector<pair<int,int>>p;
     for (int i=0;i<n;i++)
    {
        int j=i;
        for (int t=i;t<n;t++)
            if(a[j]>a[t])
                j=t;
        if (i!=j)
            p.push_back(make_pair(i,j));
        swap(a[i],a[j]);
    }

    cout<<p.size()<<endl;
    for(int i=0;i<p.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    cout<<endl;
    return 0;
}

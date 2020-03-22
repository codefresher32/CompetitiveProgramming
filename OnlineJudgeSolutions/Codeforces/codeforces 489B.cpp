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

    int k=0;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k++;
                swap(a[i],a[j]);
                p.push_back(make_pair(i,j));
                if(k==n-1)
                    break;
            }
        }
        if(k==n-1)
            break;
    }

    cout<<k<<endl;
    for(int i=0;i<p.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    cout<<endl;
    return 0;
}

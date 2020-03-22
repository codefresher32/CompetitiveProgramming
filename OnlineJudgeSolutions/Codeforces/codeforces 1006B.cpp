#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,k,sum=0;
    cin>>n>>k;
    vector<pair<int,int>>v;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<k;i++)
        sum+=v[i].first;
    cout<<sum<<endl;
    for(int i=0;i<k;i++)
        b.push_back(v[i].second);
    sort(b.begin(),b.end());
    int tr=0;
    if(k==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        if(i==k-1){
            cout<<n-b[i-1];
            continue;
        }
        cout<<b[i]-tr<<" ";
        tr=b[i];
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

multiset<int>l,r;
int seg[300005][2];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>seg[i][0]>>seg[i][1];
        l.insert(seg[i][0]);
        r.insert(seg[i][1]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
       l.erase(l.find(seg[i][0]));
       r.erase(r.find(seg[i][1]));
       ans=max(ans,*r.begin()-*l.rbegin());
       l.insert(seg[i][0]);
       r.insert(seg[i][1]);
    }
    cout<<ans<<endl;
    return 0;
}

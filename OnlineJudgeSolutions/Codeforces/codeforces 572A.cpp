#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,l,x;
    vector<int>a,b;
    cin>>n>>m;
    cin>>k>>l;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(a[k-1]<b[i])
        {
            c++;
        }
    }
    if(c>=l)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

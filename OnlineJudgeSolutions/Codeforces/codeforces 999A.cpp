#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,c=0,i,j;
    cin>>n>>k;
    vector<int>q;
    for(i=0;i<n;i++)
    {
        cin>>a;
        q.push_back(a);
    }
    for(i=0;i<n;i++)
    {
        if(q[i]<=k)
            c++;
        else
            break;
    }
    for(j=n-1;j>=i;j--)
    {
        if(q[j]<=k)
            c++;
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}

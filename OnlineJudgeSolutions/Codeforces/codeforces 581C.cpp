#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,x,ans=0;
    vector<int>b;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ans+=a/10;
        b.push_back(10-a%10);
    }
    sort(b.rbegin(),b.rend());
    for(int i=0;i<n;i++)
    {
        if(k>=b[i]&&b[i]<10)
        {
            ans++;
            k-=b[i];
        }
        else
            break;
    }
    ans+=k/10;
    ans=min(ans,n*10);
    cout<<ans<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,s[100005];
    cin>>n;
    s[100005]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n+1);

    for(int i=1;i<=n;i++)
    {
        if(s[i-1]<=s[i])
            c++;
        s[i]+=s[i-1];
    }
    cout<<c<<endl;
    return 0;
}

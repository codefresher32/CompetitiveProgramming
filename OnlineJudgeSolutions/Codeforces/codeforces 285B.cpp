#include<bits/stdc++.h>
using namespace std;

bool f[100005];

int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[100005]={0};
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int p=s,cnt=0;
    while(p!=t)
    {
        if(f[p])
        {
            cout<<-1<<endl;
            return 0;
        }
        f[p]=true;
        p=a[p];
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


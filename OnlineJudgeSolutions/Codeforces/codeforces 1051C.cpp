#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105]={0},cnt[105]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    int c=0,C=0;
    for(int i=1;i<=n;i++)
    {
        if(cnt[a[i]]==1)
            c++;
        if(cnt[a[i]]>2)
            C++;
    }
    if(c&1&&!C){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    if(c&1)
    {
        for(int i=1;i<=n;i++)
        {
            if(C&&cnt[a[i]]>2)
            {
                cout<<"A";
                C=0;
            }
            else if(cnt[a[i]]==1)
            {
                cout<<(char)('A'+(c&1));
                c--;
            }
            else
                cout<<"B";
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(cnt[a[i]]==1)
            {
                cout<<(char)('A'+(c&1));
                c--;
            }
            else
                cout<<"B";
        }
    }
    cout<<endl;
    return 0;
}



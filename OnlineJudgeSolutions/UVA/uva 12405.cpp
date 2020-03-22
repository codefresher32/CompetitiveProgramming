#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int cnt=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                cnt++;
            }
            else if(s[i]=='#')
            {
                if(cnt==1)
                {
                    ans++;
                    i++;
                    cnt=0;
                }
            }
            if(cnt==2)
            {
                ans++;
                i++;
                cnt=0;
            }
        }
        if(cnt!=0)
            ans++;
        printf("Case %d: %d\n",++p,ans);
    }
    return 0;
}

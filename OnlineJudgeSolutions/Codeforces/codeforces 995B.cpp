#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int ans=0;
    for(int i=0;i<n*2;i++)
    {
        if(v[i]!=0)
        {
            for(int j=i+1;j<n*2;j++)
            {
                if(v[i]==v[j])
                {
                    ans+=(j-i-1);
                    v[j]=0;
                    break;
                }
                else if(v[j]==0)
                {
                    ans--;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

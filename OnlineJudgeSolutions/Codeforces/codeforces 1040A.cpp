#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,m;
    cin>>n>>a>>b;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    int tr=-1,c=0,x;
    if(v[n/2]==2&&n%2!=0)
    {
        c+=min(a,b);
    }
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        if(v[i]!=v[j]&&(v[i]!=2&&v[j]!=2))
        {
            tr=1;
            break;
        }
        else if(v[i]==2&&v[j]==2)
        {
            x=min(a,b);
            c+=2*x;
        }
        else
        {
            if(v[i]==2)
            {
                if(v[j]==0)
                    c+=a;
                else
                    c+=b;
            }
            else if(v[j]==2)
            {
                if(v[i]==0)
                    c+=a;
                else
                    c+=b;
            }
        }
    }
    if(tr==-1)
        cout<<c<<endl;
    else
        cout<<-1<<endl;
    return 0;
}

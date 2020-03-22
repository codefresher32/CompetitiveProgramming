#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,l;
    cin>>n>>m;
    string s1,s2,x,y,o,p;
    cin>>s1>>s2;
    k=-1;
    for(i=0;i<n;i++)
    {
        if(s1[i]=='*')
        {
            k=i;
            break;
        }
    }
    if(n>m+1)
    {
        cout<<"NO\n";
        return 0;
    }
    if(k==-1)
    {
        if(s1==s2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        return 0;
    }
    else
    {
        x=s1.substr(0,k);
        y=s2.substr(0,k);
        o=s1.substr(k+1);
        p=s2.substr(k);
        if(x==y)
        {
            if(o.size()<=p.size())
            {
                reverse(o.begin(),o.end());
                reverse(p.begin(),p.end());
                int tr=1;
                for(i=0;i<o.size();i++)
                {
                    if(o[i]!=p[i])
                    {
                        cout<<"NO\n";
                        return 0;
                    }
                }
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
                return 0;
            }
        }
        else
            cout<<"NO\n";
    }
    return 0;
}

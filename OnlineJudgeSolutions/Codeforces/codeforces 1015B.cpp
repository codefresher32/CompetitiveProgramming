#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,o,p;
    int n;
    vector<int>v;
    cin>>n;
    cin>>s1>>s2;
    o=s1;
    p=s2;
    sort(o.begin(),o.end());
    sort(p.begin(),p.end());
    if(o!=p)
    {
        cout<<-1<<endl;
        return 0;
    }
    int x;
    for(int i=0;i<n;i++)
    {
        if(s2[i]!=s1[i])
        {
            for(int j=i+1;j<n;j++)
            {
                if(s2[i]==s1[j])
                {
                    x=j;
                    break;
                }
            }
            for(int k=x;k>i;k--)
            {
                swap(s1[k],s1[k-1]);
                v.push_back(k);
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}

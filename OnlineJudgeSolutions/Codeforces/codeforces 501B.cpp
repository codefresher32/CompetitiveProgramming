#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,a[1001]={0};
    char s1[21],s2[21];
    vector<pair<string,string>>p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        p.push_back(make_pair(s1,s2));
    }
    int x=0;
        for(int i=x;i<p.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                if(!a[j])
                {
                if(p[i].second==p[j].first)
                    {
                        p[i].second=p[j].second;
                        a[j]=1;
                        i--;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!a[i])
                c++;
        }
        cout<<c<<endl;
        for(int i=0;i<p.size();i++)
        {
            if(!a[i]){
            cout<<p[i].first<<" "<<p[i].second<<endl;
            }
        }
    return 0;
}

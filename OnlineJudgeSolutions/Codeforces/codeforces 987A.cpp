#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[6];
    string s;
    vector<pair<string,string>>v;
    v.push_back(make_pair("purple","Power"));
    v.push_back(make_pair("green","Time"));
    v.push_back(make_pair("blue","Space"));
    v.push_back(make_pair("orange","Soul"));
    v.push_back(make_pair("red","Reality"));
    v.push_back(make_pair("yellow","Mind"));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int i=0;i<6;i++)
        {
            if(s==v[i].first)
                v[i].first="";
        }
    }
    int x=6-n;
    cout<<x<<endl;
    if(x!=0)
    {
        for(int i=0;i<6;i++)
        {
            if(v[i].first=="")
                continue;
            cout<<v[i].second<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m;
    vector<int>v;
    int a,n=0;
    while(cin>>a)
    {
        m[a]++;
        v.push_back(a);
        n++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[v[i]]>0){
            cout<<v[i]<<" "<<m[v[i]]<<endl;
            m[v[i]]=0;
        }
    }
    return 0;
}

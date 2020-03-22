#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    long long m,j=1;
    set<int>st,s;
    set<int>::iterator it;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    while(j<=m)
    {
        it=st.find(j);
        if(it==st.end())
        {
            s.insert(j);
            m-=j;
        }
        j++;
    }
    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    return 0;
}

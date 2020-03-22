#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s1=0,s2=0;
    int n,m,a,b;
    set<long long>st;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s1+=a;
        st.insert(s1);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b);
        s2+=b;
        st.insert(s2);
    }
    if(s1==s2)
        cout<<n+m-st.size()<<endl;
    else
        cout<<-1<<endl;
    return 0;
}



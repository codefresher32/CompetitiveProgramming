#include<bits/stdc++.h>
using namespace std;

bool f[200005];

int main()
{
    string s;
    int l,n,k,j,r;
    cin>>n>>k;
    cin>>s;
    stack<int>st;
    r=(n-k)/2;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else
        {
            if(r>0)
            {
                f[st.top()]=1;
                f[i]=1;
                r--;
            }
            st.pop();
        }
    }
    for(int i=0;i<n;i++)
        if(!f[i])
            cout<<s[i];
    cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,k,s;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y>>k;
        if(max(x,y)>k)
        {
            cout<<-1<<endl;
            continue;
        }
        s=k;
        if(x%2!=k%2)
            s--;
        if(y%2!=k%2)
            s--;
        cout<<s<<endl;
    }
    return 0;
}


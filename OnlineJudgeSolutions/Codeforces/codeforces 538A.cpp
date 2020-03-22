#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t="CODEFORCES",t1,u1,t2,u2;
    cin>>s;
    int tr=0,l;
    l=s.size();
    if(l<10)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<=10;i++)
    {
        t1 = t.substr(0,i);
        u1 = t.substr(i);
        t2 = s.substr(0,i);
        u2 = s.substr(l+i-10);
       if(t1==t2&&u1==u2)
       {
           tr=1;
           break;
       }
    }
    if(tr)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

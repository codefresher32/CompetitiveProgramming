#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    long long a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=0;
        s=to_string(a);
        l=s.size();
        for(int i=0;i<l;i++)
            b+=pow((s[i]-'0'),l);
        if(a==b)
            cout<<"Armstrong\n";
        else
            cout<<"Not Armstrong\n";
    }
    return 0;
}

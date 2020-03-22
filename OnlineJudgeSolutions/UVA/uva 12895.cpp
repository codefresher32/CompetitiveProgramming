#include<bits/stdc++.h>
using namespace std;

int power(int x,int l)
{
    int a=1;
    for(int i=1;i<=l;i++)
        a*=x;
    return a;
}

int main()
{
    int t,l;
    long long a,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        x=0;
        s=to_string(a);
        l=s.size();
        for(int i=0;i<l;i++){
            x+=power(s[i]-'0',l);
        }
        if(a==x)
            cout<<"Armstrong\n";
        else
            cout<<"Not Armstrong\n";
    }
    return 0;
}

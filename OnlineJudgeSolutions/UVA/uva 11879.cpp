#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;
    while(cin>>s)
    {
        l=s.size();
        if(s[0]=='0'&&l==1)
            return 0;
        int rem=0;
        for(int i=0;i<l;i++)
            rem=(rem*10+s[i]-'0')%17;
        if(rem==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

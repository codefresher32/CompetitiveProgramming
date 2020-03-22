#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    string s;
    while(cin>>n>>s)
    {
        l=s.size();
        int tr=1;
        if(n==0&&s[0]=='0'&&l==1)
            return 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==(n+'0'))
                s.erase(s.begin()+i),i--;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'&&tr==1)
                s.erase(s.begin()+i),i--;
            else
                tr=0;
        }
        l=s.size();
        if(l==0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<s<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s,x;
        getline(cin,s);
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]!=' ')
                x+=s[i];
        }
        l=x.size();
        int mf=0,fm=0,mm=0,ff=0;
        for(int i=0;i<l;i+=2)
        {
            if(x[i]=='M'&&x[i+1]=='F')
                mf++;
            else if(x[i]=='F'&&x[i+1]=='M')
                fm++;
            else if(x[i]=='M'&&x[i+1]=='M')
                mm++;
            else if(x[i]=='F'&&x[i+1]=='F')
                ff++;
        }
        if(l==2||mm!=ff)
            cout<<"NO LOOP\n";
        else
            cout<<"LOOP\n";
    }
    return 0;
}

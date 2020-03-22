#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,c=0;
    cin>>a>>b>>x;
    string s;
    if(x%2==0)
        c=1;
    x/=2;
    if(b>=a)
    {
        while(x--)
        {
            s+="10";
            a--,b--;
        }
        if(!c)
        {
            while(b--)
                s+="1";
            while(a--)
                s+="0";
        }
        else
        {
            while(a--)
                s+="0";
            while(b--)
                s+="1";
        }
    }
    else
    {
        while(x--)
        {
            s+="01";
            a--,b--;
        }
        if(!c)
        {
            while(a--)
                s+="0";
            while(b--)
                s+="1";
        }
        else
        {
            while(b--)
                s+="1";
            while(a--)
                s+="0";
        }
    }
    cout<<s<<endl;
    return 0;
}

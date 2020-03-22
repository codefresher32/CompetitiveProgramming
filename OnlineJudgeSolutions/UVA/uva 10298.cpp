#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    string s,o,p;
    while(cin>>s)
    {
        if(s[0]=='.')
            return 0;
        l=s.size();
        int tr,c=1,k,x=0;
        for(int i=0;i<l/2;i++)
        {
            tr=1;
            o=s.substr(0,i+1);
            k=i+1;
            for(int j=k;j<l;j+=k)
            {
                p=s.substr(j,i+1);
                if(o!=p){
                    tr=0;
                    break;
                }
                else
                    c++;
            }
            if(tr)
            {
                x=1;
                cout<<c<<endl;
                break;
            }
        }
        if(!x)
            cout<<1<<endl;
    }
    return 0;
}


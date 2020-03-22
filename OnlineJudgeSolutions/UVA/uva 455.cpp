#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    cin>>t;
    while(t--)
    {
        string s,o,p;
        cin>>s;
        l=s.size();
        int tr,c=0,k;
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
            }
            if(tr)
            {
                c=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(!c)
            cout<<l<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}

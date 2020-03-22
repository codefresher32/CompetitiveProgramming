#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s;
    string smax,smin;
    cin>>m>>s;
    if(m*9<s||(m>1&&s==0))
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    if(m==1&&s==0)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    while(m>0||s>0)
    {
        if(s>9)
        {
            smax+=(9+'0');
            s-=9;
        }
        else
        {
            smax+=(s+'0');
            s-=s;
        }
        m--;
    }
    smin=smax;
    sort(smin.begin(),smin.end());
    if(smin[0]=='0')
    {
        smin[0]='1';
        for(int i=1;i<smin.size();i++)
        {
            if(smin[i]!='0'){
                smin[i]=smin[i]-1;
                break;
            }
        }
    }
    cout<<smin<<" "<<smax<<endl;
    return 0;
}

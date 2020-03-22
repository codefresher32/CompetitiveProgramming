#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ss,st="" ;
    long long int h,m,s;
    double rt=0,pt=0,v=0,ans=0;
    char c;
    while(getline(cin,ss))
    {
        st=ss;
        stringstream sin(ss);
        sin >> h >> c >> m >> c >> s ;
        rt=h*3600.0+m*60.0+s*1.0;
        if(ss[8]=='\0')
        {
            ans+=(rt-pt)*v;
            cout<<st<<" "<<fixed<<setprecision(2)<<ans/3600.0<<" km"<<endl;

        }
        else
        {
            ans+=(rt-pt)*v;
            sin >> v;
        }
        pt=rt;
    }
    return 0;
}

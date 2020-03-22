#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0)
            return 0;
        f=u*(f/100);
        double ih=0.0;
        int day=0;
        while(1)
        {
            day++;
            if(u>0)
                ih+=u;
            u-=f;
            if(ih>h)
                break;
            ih-=d;
            if(ih<0)
                break;
        }
        if(ih>=0)
        {
            cout<<"success on day "<<int(day)<<endl;
        }
        else
        {
            cout<<"failure on day "<<int(day)<<endl;
        }
    }
}

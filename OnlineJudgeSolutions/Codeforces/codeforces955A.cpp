#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm,h,d,c,n,f;
    double co,dco;
    cin>>hh>>mm>>h>>d>>c>>n;
    if(hh>=20)
    {
       dco=(ceil(h/((1.0)*n)))*c*0.80;
       printf("%0.4f",dco);
    }
    else if(hh<20)
    {
        hh=(19-hh)*60;
        mm=60-mm;
        f=((hh+mm)*d)+h;
        dco=(ceil(f/((1.0)*n)))*c*0.80;
        co=(ceil(h/((1.0)*n)))*c;
        dco=dco<=co?dco:co;
        printf("%0.4f",dco);
    }
    return 0;
}

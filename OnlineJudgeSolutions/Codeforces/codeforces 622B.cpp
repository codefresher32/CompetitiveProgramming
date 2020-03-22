#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm,a,m=0,h;
    char s;
    string ss;
    cin>>ss;
    cin>>a;
    stringstream sin(ss);
    sin>>hh>>s>>mm;
    h=(mm+a)/60;
    hh+=h;
    mm=(mm+a)-(h*60);
    if(hh>23)
        hh%=24;
    printf("%02d:%02d",hh,mm);
    return 0;
}

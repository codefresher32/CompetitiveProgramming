#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long m;
    string s,o;
    cin>>n;
    cin>>s>>o;
    long long c00,c11,c10,c01;
    c00=c11=c10=c01=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'&&o[i]=='0')
            c00++;
        else if(s[i]=='1'&&o[i]=='1')
            c11++;
        else if(s[i]=='0'&&o[i]=='1')
            c01++;
        else
            c10++;
    }
    m=c00*c11+c01*c10+c00*c10;
    cout<<m<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c1=0,c2=0,x;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            c1++;
        else
            c2++;
    }
    x=c1>=c2?c1-c2:c2-c1;
    cout<<x<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g,l,t;
    cin>>t;
    while(t--)
    {
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,w,h,i=1;
    cin>>t;
    while(t--)
    {
        cin>>l>>w>>h;
        cout<<"Case "<<i<<": ";
        if(l<=20&&w<=20&&h<=20)
        {
            cout<<"good\n";
        }
        else
        {
            cout<<"bad\n";
        }
        i++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<< (360%(180-a)==0?"YES\n":"NO\n");
    }
    return 0;
}

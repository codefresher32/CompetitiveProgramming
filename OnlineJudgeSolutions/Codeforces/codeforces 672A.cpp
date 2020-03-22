#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    stringstream ss;
    for(int i=1;i<=500;i++)
        ss<<i;
    s=ss.str();
    cout<<s[n-1];
    return 0;
}

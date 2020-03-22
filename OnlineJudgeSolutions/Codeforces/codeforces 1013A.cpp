#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[55],b[55],s1=0,s2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        s2+=b[i];
    }
    if(s1<s2)
    {
        cout<<"No\n";
        return 0;
    }
    /*sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"No\n";
            return 0;
        }
    }*/
    cout<<"Yes\n";
    return 0;
}

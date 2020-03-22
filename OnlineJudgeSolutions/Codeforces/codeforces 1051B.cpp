#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r;
    cin>>l>>r;
    cout<<"YES\n";
    for(long long i=0,j=l;i<(r-l+1)/2;i++,j++)
    {
        cout<<j<<" "<<j+1<<endl;
        j++;
    }
    return 0;
}

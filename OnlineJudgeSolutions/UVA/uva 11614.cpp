#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=(sqrt(1+8*n)-1)/2;
        cout<<int(k)<<endl;
    }
    return 0;
}

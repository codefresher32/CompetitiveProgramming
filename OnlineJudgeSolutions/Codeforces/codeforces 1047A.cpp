#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    int a,b=1,c=1;
    a=n-2;
    if(a%3==0){
        a--;
        b=1;
        c=2;
    }
    cout<<b<<" "<<c<<" "<<a<<endl;
    return 0;
}

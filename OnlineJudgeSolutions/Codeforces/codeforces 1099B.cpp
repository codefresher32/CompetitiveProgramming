#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,sum=0,s1,s2;
    cin>>n;
    s1=sqrt(n);
    s2=sqrt(n);
    if(s1*s2!=n){
        s1++;
    }
    if(s1*s2>=n)
        cout<<s1+s2<<endl;
    else
        cout<<s1+s2+1<<endl;
    return 0;
}



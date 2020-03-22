#include<bits/stdc++.h>
using namespace std;

int sum(long long x)
{
    int s=0,r;
    while(x){
        r=x%10;
        s+=r;
        x/=10;
    }
    return s;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,x,y;
    cin>>n;
    string s=to_string(n),o;
    int l=s.size()-1;
    int su=l*9;
    y=0;
    for(int i=1;i<=l;i++){
       y=y*10+9;
    }
    n-=y;
    su+=sum(n);
    cout<<su<<endl;
    return 0;
}




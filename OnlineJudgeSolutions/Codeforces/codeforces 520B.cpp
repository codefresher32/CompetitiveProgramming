#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c=0;
    cin>>n>>m;
    if(n>=m){
        cout<<n-m<<endl;
    }
    else{
        while(m!=n){
            if(m&1){
                m++;
            }
            else{
                m=m>n?m/2:m+1;
            }
           c++;
        }
        cout<<c<<endl;
    }
    return 0;
}


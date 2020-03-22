#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isP(int n)
{
    if(n%2==0&&n!=2){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,cn,cm,gc;
    cin>>n;
    for(int i=1;i<=1000;i++){
        if(!isP(n*i+1)){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l1,l2,r1,r2,t;
    cin>>t;
    while(t--){
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2){
            cout<<l1<<" "<<r2<<endl;
        }
        else{
            cout<<l1<<" "<<l2<<endl;
        }
    }

    return 0;
}




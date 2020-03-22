#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,tr=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m;
        if(m==1){
            tr=1;
            cout<<"HARD\n";
            return 0;
        }
    }
    if(!tr){
        cout<<"EASY\n";
    }
    return 0;
}


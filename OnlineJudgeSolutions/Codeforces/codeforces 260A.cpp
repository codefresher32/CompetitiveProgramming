#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=0;i<=9;i++){
        if((a*10+i)%b==0){
            cout<<a*10+i;
            for(int i=1;i<n;i++){
                cout<<0;
            }
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}


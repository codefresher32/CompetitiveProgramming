#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    char s[20];
    char c1,c2;
    cin>>c1>>c2;
    for(int i=0;i<10;i++){
        cin>>s[i];
    }
    for(int i=0;i<10;i++){
        if(i%2==0){
            if(s[i]==c1){
                cout<<"YES\n";
                return 0;
            }
        }
        else{
           if(s[i]==c2){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}

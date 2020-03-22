#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ax,ay,bx,by,cx,cy;
    string s;
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;
    if(ax<bx&&ay<by&&ax<cx&&ay<cy){
        cout<<"YES\n";
    }
    else if(ax>bx&&ay<by&&ax>cx&&ay<cy){
        cout<<"YES\n";
    }
    else if(ax>bx&&ay>by&&ax>cx&&ay>cy){
        cout<<"YES\n";
    }
    else if(ax<bx&&ay>by&&ax<cx&&ay>cy){
        cout<<"YEs\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}


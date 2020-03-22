#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    int in=w;
    for(int i=h;i>=0;i--){
        in+=i;
        if(i==d1){
            in-=u1;
        }
        if(i==d2){
            in-=u2;
        }
        if(in<0){
            in=0;
        }
    }

    cout<<in<<endl;
    return 0;
}


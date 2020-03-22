#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=3;i>0;i--){
        cout<<a[3]-a[i-1]<<" ";
    }
    return 0;
}


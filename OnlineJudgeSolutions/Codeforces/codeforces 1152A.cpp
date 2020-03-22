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
    int n,m,a,od1,od2,ev1,ev2;
    od1=od2=ev1=ev2=0;
    cin>>n>>m;
    while(n--){
        cin>>a;
        if(a&1){
            od1++;
        }
        else{
            ev1++;
        }
    }
    while(m--){
        cin>>a;
        if(a&1){
            od2++;
        }
        else{
            ev2++;
        }
    }
    cout<<min(od1,ev2)+min(od2,ev1)<<endl;
    return 0;
}



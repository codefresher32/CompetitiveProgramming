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
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            printf("YES\n%d %d\n",i+1,i+2);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}


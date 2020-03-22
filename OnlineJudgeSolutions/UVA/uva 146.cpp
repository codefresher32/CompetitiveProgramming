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
    string s;
    while(cin>>s){
        bool f;
        if(s=="#"){
            break;
        }
        f=next_permutation(s.begin(),s.end());
        if(!f){
            printf("No Successor\n");
        }
        else{
            //cout<<s<<endl;
            printf("%s\n",s.c_str());
        }
    }

    return 0;
}

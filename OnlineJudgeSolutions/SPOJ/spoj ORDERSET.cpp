#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pb_ds;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,k;
    pb_ds st;
    char ch;
    scanf("%d",&q);
    while(q--){
        getchar();
        scanf("%c %d",&ch,&n);
        if(ch=='I') st.insert(n);
        else if(ch=='D') st.erase(st.find(n));
        else if(ch=='K'){
            if(n>st.size()) printf("invalid\n");
            else{
                printf("%d\n",*st.find_by_order(n-1));
            }
        }
        else{
            int idx=st.order_of_key(n);
            printf("%d\n",idx);
        }
    }
    return 0;
}


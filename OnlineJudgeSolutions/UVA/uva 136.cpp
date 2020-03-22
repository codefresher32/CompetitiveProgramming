#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 10
#define ex 1e-7


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    set<ll>st;
    st.insert(1);
    auto it=st.begin();
    int cnt=1;
    while(cnt<1500){
        st.insert(*it*2ll);
        st.insert(*it*3ll);
        st.insert(*it*5ll);
        it++,cnt++;
    }
    printf("The 1500'th ugly number is %lld.\n",*it);
    return 0;
}


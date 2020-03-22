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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    stack<double>st;
    while(cin>>n){
        st.push(sqrt(n));
    }
    while(!st.empty()){
        cout<<fixed<<setprecision(4)<<st.top()<<endl;
        st.pop();
    }
    return 0;
}



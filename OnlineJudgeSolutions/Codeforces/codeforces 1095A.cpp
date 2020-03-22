#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int j=0;
    for(int i=0;i<n;){
        cout<<s[i];
        j++;
        i+=j;
    }
    return 0;
}



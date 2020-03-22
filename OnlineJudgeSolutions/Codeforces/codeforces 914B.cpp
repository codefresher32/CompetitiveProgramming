#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c[100005]={0},a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        c[a]++;
    }
    for(int i=1;i<=1e5;i++){
        if(c[i]%2){
            cout<<"Conan\n";
            return 0;
        }
    }

    cout<<"Agasa\n";
    return 0;
}

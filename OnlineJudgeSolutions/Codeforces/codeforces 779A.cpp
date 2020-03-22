#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,g1[6]={0},g2[6]={0},a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        g1[a]++;
    }
    for(int i=1;i<=n;i++){
        cin>>a;
        g2[a]++;
    }
    int ex=0;
    for(int i=1;i<=5;i++){
        if((g1[i]+g2[i])&1){
            cout<<-1<<endl;
            return 0;
        }
        if((g1[i]+g2[i])/2>g1[i]){
           ex+=(g1[i]+g2[i])/2-g1[i];
        }
    }
    cout<<ex<<endl;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int>dq1,dq2;
    int n,a,k1,k2;
    cin>>n;
    cin>>k1;
    for(int i=0;i<k1;i++){
        cin>>a;
        dq1.push_back(a);
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        cin>>a;
        dq2.push_back(a);
    }
    int f=0,x,y;

    while(f<=1000){
        if(dq1.empty()||dq2.empty()){
            break;
        }
        x=dq1.front();
        dq1.pop_front();
        y=dq2.front();
        dq2.pop_front();
        if(x>y){
            dq1.push_back(y);
            dq1.push_back(x);
        }
        else{
            dq2.push_back(x);
            dq2.push_back(y);
        }
        f++;
    }
    if(f>=1000){
        cout<<-1<<endl;
    }
    else{
        cout<<f<<" ";
        if(!dq1.empty()){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}


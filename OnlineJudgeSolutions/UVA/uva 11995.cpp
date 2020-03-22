#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

queue<int>q;
stack<int>s;
priority_queue<int>pq;
int a[3];

void clr()
{
    memset(a,0,sizeof(a));
    while(!q.empty()){
        q.pop();
    }
    while(!s.empty()){
        s.pop();
    }
    while(!pq.empty()){
        pq.pop();
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,tc,qt,st,pqt;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>tc>>x;
            if(tc==1){
                q.push(x);
                s.push(x);
                pq.push(x);
            }
            else{
                if(!q.empty()){
                   qt=q.front(),q.pop();
                   if(qt!=x){
                        a[0]=1;
                    }
                }
                else{
                    a[0]=a[1]=a[2]=1;
                }
                if(!s.empty()){
                   st=s.top(),s.pop();
                   if(st!=x){
                        a[1]=1;
                    }
                }
                else{
                    a[0]=a[1]=a[2]=1;
                }
                if(!pq.empty()){
                   pqt=pq.top(),pq.pop();
                    if(pqt!=x){
                        a[2]=1;
                    }
                }
                else{
                    a[0]=a[1]=a[2]=1;
                }

            }
        }
        int cnt=0,p;
        for(int i=0;i<3;i++){
            if(!a[i]){
                cnt++;
                p=i;
            }
        }
        if(cnt>=2){
            cout<<"not sure\n";
        }
        else if(cnt==0){
            cout<<"impossible\n";
        }
        else{
            if(p==0){
                cout<<"queue\n";
            }
            else if(p==1){
                cout<<"stack\n";
            }
            else{
                cout<<"priority queue\n";
            }
        }
        clr();
    }
    return 0;
}


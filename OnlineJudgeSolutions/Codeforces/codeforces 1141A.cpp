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
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1<<endl;
    }
    else{
        int cnt=0;
        m/=n;
        while(m!=1){
            if(m%2==0){
                m/=2;
            }
            else if(m%3==0){
                m/=3;
            }
            else{
                break;
            }
            cnt++;

        }
        if(m==1){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

long long a[105];
set<long long>st;
set<long long>::iterator it;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    sort(a,a+n);
    long long x;
    bool f;
    for(int i=0;i<n;i++){
        x=a[i];
        f=true;
        for(int j=1;j<n;j++){
            if(j&1){
               if(x%3==0){
                    x/=3;
                    it=st.find(x);
                    if(it==st.end()){
                        f=false;
                        break;
                    }
               }
                else{
                    f=false;
                    break;
                }
            }
            else{
                if(x%2==0){
                    x/=2;
                    it=st.find(x);
                    if(it==st.end()){
                        f=false;
                        break;
                    }
               }
                else{
                    f=false;
                    break;
                }
            }
        }
        if(f){
            x=a[i];
            break;
        }
    }
    cout<<x<<" ";
    for(int i=1;i<n;i++){
       if(i&1){
            x/=3;
       }
       else{
           x*=2;
       }
       cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x,y,z,l=0,t,mx=1;
    string s;
    cin>>n>>k>>s;
    t=k;
    for(int i=0;i<n;i++){
        if(s[i]=='b'){
            t--;
        }
        if(t==-1){
            while(s[l]=='a'){
                l++;
            }
            l++;
            t++;
        }
        mx=max(mx,i-l+1);
    }
    t=k,l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            t--;
        }
        if(t==-1){
            while(s[l]=='b'){
                l++;
            }
            l++;
            t++;
        }
        mx=max(mx,i-l+1);
    }
    cout<<mx<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   int n,j=-1;
   string s;
   cin>>n>>s;
   int mx;
   for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            j=i;
            break;
        }
        mx=i+1;
   }
   if(j==-1){
        j=mx;
   }
   for(int i=0;i<n;i++){
        if(i==j){
            continue;
        }
        cout<<s[i];
   }
   cout<<endl;
    return 0;
}

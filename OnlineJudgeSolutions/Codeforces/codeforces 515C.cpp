#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,tw,th;
    string s;
    vector<int>v;
    cin>>n>>s;
    for(int i=0;i<n;i++){
       x=s[i]-'0';
       if(s[i]=='2'){
            v.push_back(2);
       }
       else if(s[i]=='3'){
            v.push_back(3);
       }
       else if(s[i]=='4'){
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
       }
       else if(s[i]=='5'){
            v.push_back(5);
       }
       if(s[i]=='6'){
            v.push_back(5);
            v.push_back(3);
       }
       else if(s[i]=='7'){
            v.push_back(7);
       }
       if(s[i]=='8'){
            v.push_back(7);
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
       }
       else if(s[i]=='9'){
            v.push_back(3);
            v.push_back(3);
            v.push_back(7);
            v.push_back(2);
       }

    }
        sort(v.rbegin(),v.rend());
        for(int p:v){
            cout<<p;
        }
    return 0;
}

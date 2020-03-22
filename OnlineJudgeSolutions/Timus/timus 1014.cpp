#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    scanf("%d",&n);
    if(n==0) printf("10\n");
    else if(n==1) printf("1\n");
    else{
        for(int i=9;i>=2;i--){
            while(n%i==0&&n!=1){
                s+=('0'+i);
                n/=i;
            }
        }
        if(n==1){
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

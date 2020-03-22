#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int digit(int n)
{
    string s;
    s=to_string(n);
    if(s.size()==n){
        return 1;
    }
    return digit(s.size())+1;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s;
    int n;
    while(cin>>s){
        if(s=="END"){
            break;
        }
        n=digit(s.size())+1;
        if(s=="1"){
            n--;
        }
        printf("%d\n",n);
    }

    return 0;
}



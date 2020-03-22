#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int s(int n)
{
    int x,sum=0;
    for(int i=n; ;i++){
        sum=0;
        x=i;
        while(x){
            sum+=x%10;
            x/=10;
        }
        if(sum%4==0){
            return i;
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    n=s(n);
    cout<<n<<endl;

    return 0;
}


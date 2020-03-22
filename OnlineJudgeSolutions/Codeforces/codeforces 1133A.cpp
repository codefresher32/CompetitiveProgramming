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
    int h1,h2,m1,m2,t,h,m;
    scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
    t=h1*60+m1+h2*60+m2;
    t/=2;
    h=t/60;
    m=t-(h*60);
    printf("%02d:%02d\n",h,m);

    return 0;
}


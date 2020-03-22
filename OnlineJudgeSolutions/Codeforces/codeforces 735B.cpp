#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,n1,n2,i;
    cin>>n>>n1>>n2;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    long long sum1,sum2;
    sum1=sum2=0;
    if(n1>n2)
        swap(n1,n2);
    for( i=0;i<n1;i++)
        sum1+=v[i];
    for(;i<(n1+n2);i++)
        sum2+=v[i];
    double x,y;
    x=(sum1)/(double)n1;
    y=(sum2)/(double)n2;
    printf("%0.8f\n",(x+y));
    return 0;
}

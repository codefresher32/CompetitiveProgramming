#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k;
    vector<int>v;
    while(cin>>a>>b)
    {
        v.clear();
        do
        {
            k=a/b;
            v.push_back(k);
            a%=b;
            swap(a,b);
        }
        while(b!=0);
        for(int i=0;i<v.size();i++)
        {
            if(i==0){
                printf("[%d;",v[i]);
                continue;
            }
            if(i+1==v.size())
            {
                printf("%d]\n",v[i]);
                continue;
            }
            printf("%d,",v[i]);
        }
    }
}

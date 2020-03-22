#include<bits/stdc++.h>
using namespace std;
 int arr[1000000];

int main()
{
    int n,m,a,i,j,k,l=0;
    string s;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        j=1;
        arr[1000000]={0};
        for(k=1;k<=n;k++)
        {
            cin>>m;
            for(i=1;i<=m;i++)
            {
                cin>>a;
               arr[a]=j;
            }
            j++;
        }
        queue<int>t[1005];
        queue<int>u;
        printf("Scenario #%d\n",++l);
        while(cin>>s){
            if(s=="STOP")
                break;
            else if(s=="ENQUEUE")
            {
                cin>>a;
                if(t[arr[a]].empty())
                {
                    u.push(arr[a]);
                }
                t[arr[a]].push(a);
            }
            else if(s=="DEQUEUE")
            {
                if(t[u.front()].empty())
                {
                    u.pop();
                }
                cout<<t[u.front()].front()<<endl;
                t[u.front()].pop();
                if(t[u.front()].empty())
                    u.pop();
            }
        }
        cout<<endl;
    }
}

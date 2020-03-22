#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,x,i=0;
    cin>>t;
    while(t--)
    {
        string s;
        deque<int>q;
        cin>>n>>m;
        printf("Case %d:\n",++i);
        getchar();
        while(m--)
        {
            s="";
            cin>>s;
            if(s=="pushLeft"||s=="pushRight"){
                if(q.size()==n)
                {
                    cin>>x;
                    cout<<"The queue is full\n";
                }
                else if(s[4]=='L')
                {
                    cin>>x;
                    q.push_back(x);
                    printf("Pushed in left: %d\n",q.back());
                }
                else if(s[4]=='R')
                {
                    cin>>x;
                    q.push_front(x);
                    printf("Pushed in right: %d\n",q.front());
                }
            }
            else
                {
                    if(!q.empty())
                    {
                        if(s[3]=='L')
                        {
                            printf("Popped from left: %d\n",q.back());
                            q.pop_back();
                        }
                        else if(s[3]=='R')
                        {
                            printf("Popped from right: %d\n",q.front());
                            q.pop_front();
                        }
                    }
                    else
                        cout<<"The queue is empty\n";
                }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,c,a,b,l=0;
    char x;
    while(cin>>p>>c)
    {
        if(p==0&&c==0)
            return 0;
        printf("Case %d:\n",++l);
        deque<int>q1,q2;
        b=(p<c)?p:c;
        for(int i=1;i<=b;i++)
            q1.push_back(i);
        while(c--){
            cin>>x;
            if(x=='N'){
                cout<<q1.front()<<endl;
                q1.push_back(q1.front());
                q1.pop_front();
            }
            else
            {
                cin>>a;
                int tr=0;
                while(!q1.empty())
                {
                    if(q1.front()==a)
                        tr=1,q2.push_front(a);
                    else
                        q2.push_back(q1.front());
                    q1.pop_front();
                }
                if(tr==0)
                    q2.push_front(a);
                while(!q2.empty())
                {
                    q1.push_back(q2.front());
                    q2.pop_front();
                }
            }
        }
    }
}

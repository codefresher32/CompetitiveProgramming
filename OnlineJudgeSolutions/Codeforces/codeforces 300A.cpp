#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t=0,a;
    cin>>n;
    queue<int>qn,qz,qp;
    while(n--)
    {
        cin>>a;
        if(a<0)
            qn.push(a);
        else if(a>0)
            qp.push(a);
        else
            qz.push(a);
    }
    if(!qp.size())
    {
        while(qp.size()!=2){
        qp.push(qn.front());
        qn.pop();
        }
    }
    if(qn.size()%2==0&&qn.size()!=0)
    {
        qz.push(qn.front());
        qn.pop();
    }
    cout<<qn.size()<<" ";
    while(!qn.empty()){
        cout<<qn.front()<<" ";
        qn.pop();
    }
    cout<<endl<<qp.size()<<" ";
    while(!qp.empty()){
        cout<<qp.front()<<" ";
        qp.pop();
    }
    cout<<endl<<qz.size()<<" ";
    while(!qz.empty()){
        cout<<qz.front()<<" ";
        qz.pop();
    }
    cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    vector<pair<int,int>>v;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    v.push_back(make_pair(x1-x2+x3,y1-y2+y3));
    v.push_back(make_pair(x1-x3+x2,y1-y3+y2));
    v.push_back(make_pair(x2-x1+x3,y2-y1+y3));
    cout<<v.size()<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}

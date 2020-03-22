#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,h,w,a,c;
    while(cin>>n>>b>>h>>w)
    {
        vector<int>v;
        for(int i=0;i<h;i++)
        {
            cin>>a;
            bool t=false;
            for(int j=0;j<w;j++)
            {
                cin>>c;
                if(n<=c)
                    t=true;
            }
            if(t)
                v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v.size()==0||v[0]*n>b)
            cout<<"stay home\n";
        else
            cout<<v[0]*n<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

deque<string>dq;
deque<string>::iterator it;

int inList(string s)
{
	for(int i=0;i<dq.size();i++){
		if(dq[i]==s){
			return i;
		}
	}
}

int main()
{
    int n,pos=-1;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        pos=inList(s);
        if(pos!=-1){
            dq.erase(dq.begin()+pos);
        }
        dq.push_front(s);
        pos=-1;
    }
    for(it=dq.begin();it!=dq.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}

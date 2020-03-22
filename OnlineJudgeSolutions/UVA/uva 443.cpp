 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    set<long long>s;
    set<long long>::iterator it;
    s.insert(1);
    for(it=s.begin();s.size()<=7000;*it++)
    {
        s.insert(*it*2);
        s.insert(*it*3);
        s.insert(*it*5);
        s.insert(*it*7);
    }
    vector<long long>v (s.begin(),s.end());
    int x,n;
    string a;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        printf("The %d", n);
		if(n%10 == 1 && n%100 != 11)
			printf("st");
		else if(n%10 == 2 && n%100 != 12)
			printf("nd");
		else if(n%10 == 3 && n%100 != 13)
			printf("rd");
		else
			printf("th");
		printf(" humble number is %lld.\n", v[n-1]);
    }
}

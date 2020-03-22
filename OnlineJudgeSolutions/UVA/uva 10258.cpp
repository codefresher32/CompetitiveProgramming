#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003


struct node{
    int P,Prb,Tm;
    node(int a,int b,int c){
        P=a;
        Prb=b;
        Tm=c;
    }
};

vector<node>vc;
int penalty[105][15];
bool solve[105][15];
int tpenalty[105];
int tcnt[105];
bool pers[105];


bool Com(node &A,node &B)
{
    if(A.Prb==B.Prb){
        if(A.Tm==B.Tm){
            return A.P<B.P;
        }
        return A.Tm<B.Tm;
    }
    return A.Prb>B.Prb;
}

void clr()
{
    vc.clear();
    memset(penalty,0,sizeof(penalty));
    memset(solve,0,sizeof(solve));
    memset(tpenalty,0,sizeof(tpenalty));
    memset(tcnt,0,sizeof(tcnt));
    memset(pers,0,sizeof(pers));
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,per,prbno,ti;
    char ch,s[30];
    scanf("%d",&T);
    getchar();
    getchar();
    while(T--){
        while(gets(s)){
            if(!strlen(s)){
                break;
            }
            sscanf(s,"%d %d %d %c",&per,&prbno,&ti,&ch);
            if(!solve[per][prbno]){
                if(ch=='I'){
                    penalty[per][prbno]+=20;
                }
                else if(ch=='C'){
                    penalty[per][prbno]+=ti;
                    tpenalty[per]+=penalty[per][prbno];
                    tcnt[per]++;
                    solve[per][prbno]=1;
                }
                pers[per]=1;
            }
        }
        for(int i=1;i<=100;i++){
            if(pers[i]){
                if(!tcnt[i]){
                    tpenalty[i]=0;
                }
                vc.pb(node(i,tcnt[i],tpenalty[i]));
            }
        }
        sort(vc.begin(),vc.end(),Com);
        for(node x:vc){
            printf("%d %d %d\n",x.P,x.Prb,x.Tm);
        }
        if(T){
            printf("\n");
        }
        clr();
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

double pi = 2*acos(0.0);

int main(){
    int t, cs = 0;
    double r, ans, sq, c;
    cin >> t;
    while(t--){
        cin >> r;
        sq = (r*2)*(r*2);
        c = pi*r*r;
        ans = sq - c;
        cout << "Case " << ++cs << ": " << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}

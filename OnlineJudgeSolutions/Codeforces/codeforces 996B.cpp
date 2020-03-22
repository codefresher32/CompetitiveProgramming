#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int a[1e5 + 5];

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int k= 1;

    while(true) {
        for (int i = 1; i <= n; ++i, k++) {
            if(k > a[i]) {
                cout <<i << endl;
                return 0;
            }
        }
    }

}

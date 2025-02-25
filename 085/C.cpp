#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define rep2(i, j, n) for (int i = j; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string
#define prints(string) cout << string << " "
#define printl(string) cout << string << endl
using ll = long long;
#define maxLL LLONG_MAX

int main() {
    ll N,M;
    string S, T;
    
    ll A, B, C, X;
    cin >> N >> M;
    
    rep(i,N+1) {
        for(int j=0; i+j<N+1;j++) {
            ll k = N - i - j;
            ll temp = 10000*i + 5000*j + 1000*k;
            if(temp == M) {
                prints(i);
                prints(j);
                printl(k);
                return 0;
            }
        }
    }
    printl("-1 -1 -1");
}
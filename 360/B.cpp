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
    ll N;
    string S, T;
    cin >> S >> T;
    ll S_len = S.length();
    ll T_len = T.length();

    rep2(w,1,S_len) {
        rep(c, w) {
            string candidate = "";
            for (int i = c; i < S_len; i += w) {
                candidate += S[i];
            }
            if (candidate == T) {
                printl("Yes");
                return 0;
            }
        }
    }
    
    printl("No");
}
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
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

int main() {
    string S;
    cin >> S;

    if (S[0] != S[1]) {
        if (S[0] != S[2]) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    } else {
        rep2(i, 2,S.length()) {
            if (S[i] != S[0]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
}
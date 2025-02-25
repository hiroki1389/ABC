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
    
    cin >> N >> M;
    vector<ll> A(M);
    vector<ll> X(M);
    
    ll temp;
    rep(i,M) {
        cin >> A[i];
    }
    rep(i,N) {
        rep(j,M) {
            cin >> temp;
            X[j] += temp;
        }
    }
    
    rep(i,M) {
        if(A[i] > X[i]) {
            printl("No");
            return 0;
        }
    }
    printl("Yes");
}
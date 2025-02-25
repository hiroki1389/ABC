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
    
    cin >> N;

    vector<ll> A(2*N);
    vector<bool> flag(N);

    rep(i,2*N) {
        cin >> A[i];
    }

    rep(i,2*N - 2) {
        if(A[i] == A[i+2]) {
            flag[A[i]-1] = true;
        }
    }

    ll count = 0;
    rep(i,N) {
        if(flag[i]) count++;
    }
    printl(count);
}
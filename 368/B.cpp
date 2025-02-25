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
    cin >> N;

    vector<ll> A(N);
    rep(i,N) {
        cin >> A[i];
    }

    ll count = 0;
    while(true) {
        sort(A.begin(), A.end(), greater<int>());
        if(A[1] <= 0) break;

        count++;
        A[0]--;
        A[1]--;
    }

    printl(count);
}
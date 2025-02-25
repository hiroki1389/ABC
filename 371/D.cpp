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
    int N, MG, MH;
    cin >> N;

    vector<ll> X(N), P(N);
    rep (i,N) {
        cin >> X[i];
    }
    rep (i,N) {
        cin >> P[i];
    }
    
    vector<long long> cumulative_population(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        cumulative_population[i + 1] = cumulative_population[i] + P[i];
    }
    
    ll Q;
    cin >> Q;
    while (Q--) {
        ll L, R;
        cin >> L >> R;
        
        ll left = lower_bound(X.begin(), X.end(), L) - X.begin();
        ll right = upper_bound(X.begin(), X.end(), R) - X.begin() - 1;
        
        ll total_population = 0;
        if (left <= right) total_population = cumulative_population[right + 1] - cumulative_population[left];
        printl(total_population);
    }
}
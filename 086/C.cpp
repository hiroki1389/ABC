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
    
    ll A, B, C;
    cin >> N;
    
    vector<ll> time(N+1);
    vector<ll> X(N+1);
    vector<ll> Y(N+1);
    time[0] = 0; X[0] = 0; Y[0] = 0;
    rep2(i,1, N+1) {
        cin >> time[i] >> X[i] >> Y[i];
    }
    
    rep(i,N) {
        ll dt = time[i+1] - time[i];
        ll dist = abs(X[i+1]-X[i]) + abs(Y[i+1]-Y[i]);
        if(dt>=dist && dt%2 == dist%2) {
            continue;
        }
        else {
            printl("No");
            return 0;
        }
    }
    printl("Yes");
    
}
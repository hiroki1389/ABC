#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
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
    
    cin >> N;
    
    vector<ll> X(N);
    vector<ll> Y(N);
    
    rep(i,N) {
        cin >> X[i] >> Y[i];
    }
    
    rep(i,N) {
        ll maxdist = 0;
        ll maxPoint;
        rep(j,N) {
            ll dist = pow(X[i]-X[j],2) + pow(Y[i]-Y[j],2);
            if(dist>maxdist) {
                maxdist = dist;
                maxPoint = j+1;
            }
        }
        printl(maxPoint);
    }
}
#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
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
    ll N,M,P,Q,H,X,Y,A,B,C,D;
    string S,T;
    ll count = 0;
    vector<ll> V;
    
    cin >> N >> S >> T;
    
    rep(i,N) {
        if(!(S[i] == T[i] || S[i] == '1' && T[i] == 'l' || S[i] == 'l' && T[i] == '1' || S[i] == '0' && T[i] == 'o' || S[i] == 'o' && T[i] == '0')) {
            Yes(false);
            return 0;
        }
    }
    Yes(true);
}
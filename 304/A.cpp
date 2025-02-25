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
    
    cin >> N;
    
    vector<string> name(N);
    ll age = maxLL;
    ll turn = 0;
    rep(i,N) {
        ll temp;
        cin >> name[i];
        cin >> temp;
        if(temp<age) {
            age = temp;
            turn = i;
        }
    }
    rep2(i,turn, N) {
        printl(name[i]);
    }
    rep(i,turn) {
        printl(name[i]);
    }
}
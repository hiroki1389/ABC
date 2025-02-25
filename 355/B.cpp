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
    
    vector<ll> A(N);
    vector<ll> B(M);
    
    rep(i,N) {
        cin >> A[i];
    }
    rep(i,M) {
        cin >> B[i];
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    vector<ll> AB(N+M);
    ll aNum = 0;
    ll bNum = 0;
    rep(i, N+M) {
        if (aNum < N && (bNum >= M || A[aNum] < B[bNum])) {
            AB[i] = true;
            aNum++;
        } else {
            
            AB[i] = false;
            bNum++;
        }
    }
    rep(i,N+M-1) {
        if(AB[i] && AB[i+1]) {
            printl("Yes");
            return 0;
        }
    }
    printl("No");
}
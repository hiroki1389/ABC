#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string << endl
using ll = long long;

int main() {
    ll N,K,X;
    cin >> N >> K >> X;

    rep(i,N) {
        int num;
        cin >> num;
        cout << num << " ";
        if(i==K-1) cout << X << " "; 
    }
    cout << endl;

    return 0;
}
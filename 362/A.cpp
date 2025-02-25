#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string << endl
using ll = long long;

int main() {
    ll R,G,B;
    string C;
    cin >> R >> G >> B >> C;

    if(C == "Red") {
        cout << ((G<B)?G:B) << endl;
    }
    if(C == "Green") {
        cout << ((R<B)?R:B) << endl;
    }
    if(C == "Blue") {
        cout << ((G<R)?G:R) << endl;
    }

    return 0;
}
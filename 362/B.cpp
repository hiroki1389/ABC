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
    ll xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;

    ll AB2 = pow(xB - xA, 2) + pow(yB - yA, 2);
    ll AC2 = pow(xC - xA, 2) + pow(yC - yA, 2);
    ll BC2 = pow(xC - xB, 2) + pow(yC - yB, 2);

    Yes(AB2 + AC2 == BC2 || AB2 + BC2 == AC2 || AC2 + BC2 == AB2);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define yes(flag) cout << ((flag)?"yes":"no") << endl
#define Yes(flag) cout << ((flag)?"Yes":"No") << endl
#define YES(flag) cout << ((flag)?"YES":"NO") << endl
#define print(string) cout << string << endl
using ll = long long;

int main() {
    ll N;
    cin >> N;

    if(N<100) print(100-N);
    else if (N<200) print(200-N);
    else print (300-N);
    
    return 0;
}
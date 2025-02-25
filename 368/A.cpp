#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    
    vector<ll> A(N);
    rep(i,N) {
        cin >> A[i];
    }

    int i = N-K;
    while(true) {
        cout << A[i] << " ";
        i++;
        if(i==N) i=0;
        if(i==N-K) return 0;
    }

    return 0;
}
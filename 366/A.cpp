#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    int maxA = A + (N-T-A);
    int maxT = T + (N-T-A);

    if(T > maxA || A > maxT) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
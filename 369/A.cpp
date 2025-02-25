#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int x = A-B;

    if (x == 0) cout << 1 << endl;
    else if(x%2 == 0) cout << 3 << endl;
    else cout << 2 << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> diff(N-1);
    for(int i=0; i<N-1; i++) {
        diff[i] = A[i+1] - A[i];
    }

    long long count = 0;
    int serialCount = 1;
    int lastInt = diff[0]-1;

    count += N;
    for(int i=0; i<N-1; i++) {
        if(diff[i] == lastInt) {
            serialCount++;
        }
        else {
            serialCount = 1;
            lastInt = diff[i];
        }
        count += serialCount;
    }

    cout << count << endl;

    return 0;
}
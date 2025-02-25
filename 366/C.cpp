#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    unordered_map<int, int> ball_count;

    while (Q--) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int x;
            cin >> x;
            ball_count[x]++;
        } 
        else if (query_type == 2) {
            int x;
            cin >> x;
            if (ball_count[x] > 0) {
                ball_count[x]--;
                if (ball_count[x] == 0) {
                    ball_count.erase(x);
                }
            }
        } 
        else if (query_type == 3) {
            cout << ball_count.size() << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<vector<int> > > vec(N, vector<vector<int> >(N, vector<int>(N)));
    vector<vector<vector<int> > > sum(N + 1, vector<vector<int> >(N + 1, vector<int>(N + 1, 0)));
    
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            for (int z = 0; z < N; z++) {
                cin >> vec[x][y][z];
                sum[x + 1][y + 1][z + 1] = vec[x][y][z] 
                                        + sum[x][y + 1][z + 1] 
                                        + sum[x + 1][y][z + 1] 
                                        + sum[x + 1][y + 1][z] 
                                        - sum[x][y][z + 1] 
                                        - sum[x][y + 1][z] 
                                        - sum[x + 1][y][z] 
                                        + sum[x][y][z];
            }
        }
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        
        int result = sum[x2][y2][z2]
                     - sum[x1 - 1][y2][z2]
                     - sum[x2][y1 - 1][z2]
                     - sum[x2][y2][z1 - 1]
                     + sum[x1 - 1][y1 - 1][z2]
                     + sum[x1 - 1][y2][z1 - 1]
                     + sum[x2][y1 - 1][z1 - 1]
                     - sum[x1 - 1][y1 - 1][z1 - 1];
        
        cout << result << endl;
    }

    return 0;
}
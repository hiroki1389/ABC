#include <bits/stdc++.h>
/*
#include <iostream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
*/
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define rep2(i, j, n) for (int i = j; (i) < (n); ++(i))
void yes() { cout << "yes" << endl; }
void Yes() { cout << "Yes" << endl; }
void YES() { cout << "YES" << endl; }
void yes(bool flag) { cout << (flag ? "yes" : "no") << endl; }
void Yes(bool flag) { cout << (flag ? "Yes" : "No") << endl; }
void YES(bool flag) { cout << (flag ? "YES" : "NO") << endl; }
void print() { cout << ""; }
void prints() { cout << " "; }
void printl() { cout << endl; }
template <typename T> void print(const T& value) { cout << value; }
template <typename T> void prints(const T& value) { cout << value << " "; }
template <typename T> void printl(const T& value) { cout << value << endl; }
using ll = long long;
#define maxLL LLONG_MAX
// 整数除算において、pythonのように負の値でも負の方向に切り捨てる除算
ll pyDiv(ll a, ll b) {
    ll quotient = a / b;
    if ((a % b != 0) && ((a < 0) != (b < 0))) quotient -= 1;
    return quotient;
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); } // 最大公約数（Maximum Common Divisor）
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; } // 最小公倍数（Least Common Multiple）
template<typename T> void sortVec(vector<T>& vec) { sort(vec.begin(), vec.end()); } // ベクトルの昇順ソート
template<typename T> void sortVecGreater(vector<T>& vec) { sort(vec.begin(), vec.end(), greater<T>()); } // ベクトルの降順ソート
// 和集合を返す関数
template<typename T>
set<T> setUnion(const set<T>& setA, const set<T>& setB) {
    set<T> result;
    set_union(setA.begin(), setA.end(), setB.begin(), setB.end(),
              inserter(result, result.begin()));
    return result;
}
// 積集合を返す関数
template<typename T> set<T> setIntersection(const set<T>& setA, const set<T>& setB) {
    set<T> result;
    set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(),
                     inserter(result, result.begin()));
    return result;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll N, M, Q;
    ll count = 0;
    ll S, T;
    
    cin >> N >> S >> T;
    
    vector<   pair<  pair<int, int>, pair<int, int>  >   > segments(N);
    for (int i = 0; i < N; i++) {
        cin >> segments[i].first.first >> segments[i].first.second;
        cin >> segments[i].second.first >> segments[i].second.second;
    }
    
    double min_time = 1e9;

    vector<int> perm(N);
    rep (i,N) {
        perm[i] = i;
    }
    
    do {
        for (int bit = 0; bit < (1 << N); bit++) {
            double current_x = 0, current_y = 0;
            double total_time = 0;

            rep(i,N) {
                int idx = perm[i];
                
                int Ax = segments[idx].first.first, Ay = segments[idx].first.second;
                int Cx = segments[idx].second.first, Cy = segments[idx].second.second;
                
                int start_x, start_y, end_x, end_y;
                if (bit & (1 << i)) {
                    start_x = Cx; start_y = Cy;
                    end_x = Ax; end_y = Ay;
                } else {
                    start_x = Ax; start_y = Ay;
                    end_x = Cx; end_y = Cy;
                }

                total_time += sqrt((start_x - current_x) * (start_x - current_x) + (start_y - current_y) * (start_y - current_y)) / S;

                total_time += sqrt((start_x - end_x) * (start_x - end_x) + (start_y - end_y) * (start_y - end_y)) / T;

                current_x = end_x;
                current_y = end_y;
            }
            
            min_time = min(min_time, total_time);
        }
    } while (next_permutation(perm.begin(), perm.end()));

    cout.precision(10);
    cout << min_time << endl;
}
#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF 1e5
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int x1, y1, x2, y2, n;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    vector<pair<pair<int, int>, int>> heaters(n);
    for (int i = 0; i < n; i++) {
        int x, y, r;
        cin >> x >> y >> r;
        heaters[i] = {{x, y}, r};
    }
    int count = 0;
    for (int i = min(x1, x2); i <= max(x1, x2); i++) {
        for (int j = min(y1, y2); j <= max(y1, y2); j++) {
            if (i != x1 && i != x2 && j != y1 && j != y2) continue;
            bool covered = false;
            for (int k = 0; k < n; k++) {
                covered |= (pow((j - heaters[k].first.second), 2) + pow((i - heaters[k].first.first), 2)) <=
                           pow(heaters[k].second, 2);
            }
            count += !covered;
        }
    }
    cout << count << endl;
    return 0;
}
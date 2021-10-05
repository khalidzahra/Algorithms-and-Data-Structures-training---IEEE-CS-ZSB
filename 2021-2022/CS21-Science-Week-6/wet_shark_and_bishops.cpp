#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e9 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> sum, diff;
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pairs += sum[x + y]++;
        pairs += diff[x - y]++;
    }
    cout << pairs << endl;
    return 0;
}

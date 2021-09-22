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
    int a, x, y;
    cin >> a >> x >> y;
    int result = -1;
    if (y <= 2 * a) {
        if (y != 2 * a && y != a && x > -a / 2.0 && x < a / 2.0 && y != 0) result = y / a + 1;
    } else if (y % a != 0) {
        int level = ceil(y * 1.0 / a) - 2;
        if (level % 2 == 1 && x != 0 && x > -a && x < a) result = 3 * (level - level / 2) + (x > 0);
        if (level % 2 == 0 && x > (-a / 2.0) && x < (a / 2.0)) result = 5 + (level / 2 - 1) * 3;
    }
    cout << result << endl;
    return 0;
}
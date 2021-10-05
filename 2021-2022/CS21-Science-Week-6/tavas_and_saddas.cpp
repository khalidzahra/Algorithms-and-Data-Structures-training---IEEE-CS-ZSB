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
    // 4 7 44 47 74  77  444 447 474 477 744 747 774 777
    // 0 1 10 11 100 101 110 111
    // 0 1 00 01 10 11   000 001 010
    int n, bitCount = 0, num = 0;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 7) num += pow(2, bitCount);
        n /= 10;
        bitCount++;
    }
    cout << (num + pow(2, bitCount) - 1);
    return 0;
}

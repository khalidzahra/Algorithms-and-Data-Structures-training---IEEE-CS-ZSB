/*

    Alice gave Bob two integers a and b (a>0 and b≥0). Being a curious boy, Bob wrote down an array of non-negative integers with MEX value of all elements equal to a and XOR value of all elements equal to b.

    What is the shortest possible length of the array Bob wrote?

    Recall that the MEX (Minimum EXcluded) of an array is the minimum non-negative integer that does not belong to the array and the XOR of an array is the bitwise XOR of all the elements of the array.

 */

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

vector<int> nxor(3 * 1e5 + 1);

int main() {
    for (int i = 1; i < nxor.size(); i++) nxor[i] = nxor[i - 1] ^ i;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int m, x;
        cin >> m >> x;
        cout << (nxor[m - 1] == x ? m : (nxor[m - 1] ^ x) != m ? m + 1 : m + 2) << endl;
    }
    return 0;
}


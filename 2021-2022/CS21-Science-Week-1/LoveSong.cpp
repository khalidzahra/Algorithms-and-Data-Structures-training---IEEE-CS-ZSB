//
// Created by khalid on 8/28/21.
//

#include "LoveSong.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void loveSong() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> lengths(s.length());
    lengths[0] = s[0] - 96;
    for (int i = 1; i < s.length(); i++) lengths[i] = lengths[i - 1] + s[i] - 96;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << (l - 2 >= 0 ? lengths[r - 1] - lengths[l - 2] : lengths[r - 1]) << endl;
    }
}
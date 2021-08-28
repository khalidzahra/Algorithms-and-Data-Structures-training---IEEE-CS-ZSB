//
// Created by khalid on 8/28/21.
//

#include "BeautifulMatrix.h"
#include <iostream>
#include <vector>

using namespace std;

void beautifulMatrix() {
    vector<int> matrix(25);
    int row = 1, col = 1;
    for (int i = 0; i < 25; i++) {
        cin >> matrix[i];
        if (matrix[i] == 1) {
            row = i / 5 + 1;
            col = i % 5 + 1;
        }
    }
    int moves = abs(3 - row) + abs(3 - col);
    cout << moves << endl;
}
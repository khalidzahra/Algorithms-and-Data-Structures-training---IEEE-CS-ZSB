//
// Created by khalid on 8/28/21.
//

/**
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

    Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i [1, 5].
    Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j [1, 5).

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.
 */

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
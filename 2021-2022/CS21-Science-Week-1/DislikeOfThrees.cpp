//
// Created by khalid on 8/28/21.
//

/**
Polycarp doesn't like integers that are divisible by 3 or end with the digit 3

in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than 0
) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…. Output the k-th element of this sequence (the elements are numbered from 1).
 */

#include "DislikeOfThrees.h"
#include <iostream>

using namespace std;

void dislikeOfThrees() {
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        int count = 1, curr = 1;
        while (count != k) {
            curr++;
            count++;
            while (curr % 3 == 0 || curr % 10 == 3) curr++;
        }
        cout << curr << endl;
    }
}
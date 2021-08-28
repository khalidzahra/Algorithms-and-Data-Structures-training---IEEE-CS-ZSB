//
// Created by khalid on 8/28/21.
//

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
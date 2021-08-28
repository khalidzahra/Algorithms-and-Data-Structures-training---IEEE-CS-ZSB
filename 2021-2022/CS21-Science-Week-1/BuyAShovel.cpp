//
// Created by khalid on 8/28/21.
//

#include "BuyAShovel.h"
#include <iostream>

using namespace std;

void buyAShovel() {
    int k, r;
    cin >> k >> r;
    int amt = k;
    while (amt % 10 != 0 && amt % 10 != r) amt += k;
    cout << amt / k << endl;
}
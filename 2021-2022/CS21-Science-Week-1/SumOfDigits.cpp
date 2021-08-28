//
// Created by khalid on 8/28/21.
//

#include "SumOfDigits.h"
#include <iostream>
#include <string>

using namespace std;

void sumOfDigits() {
    string num;
    int count = 0;
    cin >> num;
    while (num.length() > 1) {
        long sum = 0;
        for (char c : num) sum += long(c - '0');
        num = to_string(sum);
        count++;
    }
    cout << count << endl;
}
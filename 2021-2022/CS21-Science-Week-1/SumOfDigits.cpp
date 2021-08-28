//
// Created by khalid on 8/28/21.
//

/**

 Having watched the last Harry Potter film, little Gerald also decided to practice magic.
 He found in his father's magical book a spell that turns any number in the sum of its digits.
 At the moment Gerald learned that, he came across a number n.
 How many times can Gerald put a spell on it until the number becomes one-digit?

 */

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
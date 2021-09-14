/*

    Welcome to Rockport City!

    It is time for your first ever race in the game against Ronnie. To make the race interesting, you have bet a dollars and Ronnie has bet b dollars. But the fans seem to be disappointed. The excitement of the fans is given by gcd(a,b), where gcd(x,y) denotes the greatest common divisor (GCD) of integers x and y. To make the race more exciting, you can perform two types of operations:

    Increase both a and b by 1.
    Decrease both a and b by 1. This operation can only be performed if both a and b are greater than 0.
    In one move, you can perform any one of these operations. You can perform arbitrary (possibly zero) number of moves. Determine the maximum excitement the fans can get and the minimum number of moves required to achieve it.

    Note that gcd(x,0)=x for any x≥0.

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

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll a, b;
        cin >> a >> b;
        ll gcd = abs(a - b), amt = 0;
        if (gcd != 0 && (a % gcd != 0 || b % gcd != 0))
            amt = min(min(a, b) % gcd, gcd - min(a, b) % gcd);
        cout << gcd << " " << amt << endl;
    }
    return 0;
}


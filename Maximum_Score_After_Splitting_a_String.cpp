/*
Tag: Easy
Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;


void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    init_code();
    string input;
    cin >> input; // Reads "011101"
    cout << "Input string: " << input << endl;
    return 0;
}

/*
String Anagrams
Given two strings str1 and str2, determine if they form an anagram pair.
Note: Two strings are considered anagrams if one string can be rearranged to form the other
string.
*/

//Time Complexity: O(n)
//Space Complexity: O(1)   // fixed 26 chars

#include <iostream>
#include <string>
using namespace std;

// function to check anagram
bool isAnagram(string str1, string str2) {
    // if lengths differ -> not anagram
    if (str1.length() != str2.length()) return false;

    int count[26] = {0};  // frequency of 'a' to 'z'

    // increase count for str1 chars
    for (char c : str1) {
        count[c - 'a']++;
    }

    // decrease count for str2 chars
    for (char c : str2) {
        count[c - 'a']--;
    }

    // check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true; // all matched
}

int main() {
    string str1, str2;

    // input strings
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // check and output result
    if (isAnagram(str1, str2))
        cout << "Yes, Anagrams";
    else
        cout << "No, Not Anagrams";

    return 0;
}

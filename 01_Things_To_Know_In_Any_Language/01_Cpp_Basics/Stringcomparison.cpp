#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Function to compare two strings
    bool compareStrings(string s1, string s2) {
        // Return True if strings are equal
        return s1 == s2;
    }
};
int main(){
    Solution obj;

    //Input first string
    string s1;
    cin >> s1;

    // Input second string
    string s2;
    cin >> s2;

    //Comapre strings and print result
    if (obj.compareStrings(s1, s2))
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
/*
Topic : Strings in C++
concept : finding the length of a string
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLength(string s) {
        return s.length();
    }
};
int main() {
    Solution obj;
    string s = "Hello World!";
    cout << obj.findLength(s);
    return 0;
}
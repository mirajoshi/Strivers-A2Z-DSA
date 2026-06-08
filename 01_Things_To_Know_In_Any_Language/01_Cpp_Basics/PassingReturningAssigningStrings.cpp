#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string modifyString(string str) {
        //Assign string to a new variable
        string newStr = str;

        //Modify new string
        newStr[0] = 'H';

        //Return modified string
        return newStr;
    }
};

int main() {
    //Original String
    string original = "hello";

    Solution obj;

    //Call modifyString and store the result
    string modified = obj.modifyString(original);

    //Print Both strings
    cout << "Original string : " << original << endl;
    cout << "Modified string : " << modified << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string trim(const string& str) {
    auto start = str.find_first_not_of(" ");
    if (start == string::npos) {
        return "";
    }
    auto end = str.find_last_not_of(" ");
    return str.substr(start, end - start + 1);
}

int lengthOfLastWord(const string& s) {
    string trimmed = trim(s);
    
    int len = 0;
    for (int i = 0; i < trimmed.length(); i++) {
        if (trimmed[i] == ' ') {
            len = 0;
        } else {
            len++;
        }
    }
    return len;
}

int main() {
    string s = " fly me to the moon ";
    cout << lengthOfLastWord(s) << endl;
    return 0;
}

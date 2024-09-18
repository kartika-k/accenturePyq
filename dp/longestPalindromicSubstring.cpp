#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s, int i, int j){

    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// Function to find the length of the longest palindromic substring
    int LenOflongestPalindrome(string s) {
        int maxLength = 0;  // Initialize the max length

        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                // Check if the substring s[i...j] is a palindrome
                if(isPalindrome(s, i, j)){
                    // Update maxLength with the length of this palindrome if it's longer
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }
        
        return maxLength;  // Return the length of the longest palindromic substring
    }

int main(){
    string s;
    cin >> s;

    // string ans = "";
    // for(int i=0; i<s.size(); i++){
    //     for(int j=i; j<s.size(); j++){
    //         if(isPalindrome(s,i,j)){
    //             string str = s.substr(i,j-i+1);
    //             ans = str.size() > ans.size() ? str : ans;
    //         }
    //     }
    // }
    // cout << ans;
    
    cout << LenOflongestPalindrome(s);

    return 0;
}

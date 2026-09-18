/*Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 105
s consists of English letters, digits, symbols and spaces.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen(128, -1);

        int max_length = 0;
        int left = 0;

        // Expand the window using the right pointer
        for (int right = 0; right < s.length(); ++right) {
            char current_char = s[right];

            // If the character was seen inside the current window, shrink from
            // left
            if (last_seen[current_char] >= left) {
                left = last_seen[current_char] + 1;
            }

            // Update or record the character's latest position
            last_seen[current_char] = right;

            // Calculate the size of the current valid window
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }

    int main() {
        vector<string> test_cases = {"abcabcbb", "bbbbb", "pwwkew", ""};

        for (const string& test : test_cases) {
            cout << "String: \"" << test
                 << "\" -> Longest Unique Substring Length: "
                 << lengthOfLongestSubstring(test) << "\n";
        }

        return 0;
    }
};
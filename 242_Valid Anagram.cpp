/* Using sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
    }
};
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    vector<int> charCount(26, 0);  // Assuming the strings contain only lowercase letters
    for (int i = 0; i < s.length(); i++) {
        charCount[s[i] - 'a']++;
        charCount[t[i] - 'a']--;
    }
    for (int count : charCount) {
        if (count != 0) {
            return false;
        }
    }
    return true;
}
};
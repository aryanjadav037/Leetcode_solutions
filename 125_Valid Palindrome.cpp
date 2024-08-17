class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Move the left pointer to the right, skipping non-alphanumeric characters
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move the right pointer to the left, skipping non-alphanumeric characters
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        // Compare characters, ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        // Move pointers inward
        left++;
        right--;
    }
    return true;
}
};
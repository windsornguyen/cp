/**
 * @brief Finds the length of the longest sequence of consecutive characters in a given string.
 * @param s The input string.
 * @return The length of the longest sequence of consecutive characters.
 */
int longestRepetition(string s) {
    int n = s.length(), longest = 0, curr = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            longest = max(longest, curr);
            curr = 0;
            }
        ++curr;
    }
    longest = max(longest, curr);
    return longest;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0, right = 0, maxlen = 0;
        int hash[256];
        for (int i = 0; i < 256; i++) hash[i] = -1;

        while (right < n) {
            if (hash[s[right]] != -1 && hash[s[right]] >= left) {
                left = hash[s[right]] + 1;
            }
            maxlen = max(maxlen, right - left + 1);
            hash[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};
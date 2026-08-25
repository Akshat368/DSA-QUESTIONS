class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();
        if (n == 0 || m < n)
         return "";
        int hash[256] = {0};
        for (int i = 0; i < n; i++)
         hash[t[i]]++;
        int left = 0, count = 0;
        int minlen = INT_MAX, start = -1;
        for (int right = 0; right < m; right++) {
            if (hash[s[right]] > 0) 
            count++;
            hash[s[right]]--;
            while (count == n) {
                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    start = left;
                }
                hash[s[left]]++;
                if (hash[s[left]] > 0) count--;
                left++;
            }
        }
        return start == -1 ? "" : s.substr(start, minlen);
    }
};
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int i = 0, r = 0;
        while (i < n) {
            while (i < n && s[i] == ' ') i++;   // spaces skip karo
            if (i == n) break;                   // aage koi word nahi bacha
            if (r != 0) s[r++] = ' ';            // separator sirf tab jab pehle se koi word likha ho
            int start = r;
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }
            reverse(s.begin() + start, s.begin() + r);
        }
        s.resize(r);
        return s;
    }
};
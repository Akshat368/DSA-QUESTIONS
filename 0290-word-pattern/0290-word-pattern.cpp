class Solution {
public:
    bool wordPattern(string pattern, string s) {
     vector<string> words;
     stringstream ss(s);      // s = problem ka input string
     string word;
    while (ss >> word) {
    words.push_back(word);
    }
    if (pattern.size() != words.size())
     return false;
     unordered_map<string,char> mp;
     set<char> used;
     for (int i = 0; i < pattern.size(); i++) {
    string w = words[i];
    char ch = pattern[i];
    if (mp.find(w) != mp.end()) {        // Case A
        if (mp[w] != ch)
         return false;
    } 
    else {                              // Case B
        if (used.find(ch) != used.end()) 
        return false;
        mp[w] = ch;
        used.insert(ch);
    }
}
return true;
    }
};
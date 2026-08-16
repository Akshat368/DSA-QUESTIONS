/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq=0,left=0,right=0,maxlen=0
        int hash[26]={0};
        int len=right-left+1;
        while(right<s.size()){
            hash[s[right]-'A']++;
            maxfrq=max(maxfreq, hash[s[right]-'A']);
            while((len-maxfreq)>k){
                hash[s[left]-'A']--;
                maxfrq=0;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,hash[i]);
                    left++;
                }
                if((len-maxfreq)<=k)
                maxlen=max(maxlen,len);
                right++;
        }
        return maxlen;    
    }
};
*/
class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26] = {0};
        int left = 0, maxfreq = 0, maxlen = 0;
        for (int right = 0; right < s.size(); right++) {
            hash[s[right] - 'A']++;
            maxfreq = max(maxfreq, hash[s[right] - 'A']);
            // if window is invalid, slide it (don't shrink maxfreq)
            if ((right - left + 1) - maxfreq > k) {
                hash[s[left] - 'A']--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
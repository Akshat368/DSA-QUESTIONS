class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int &x:arr){
            mpp[x]++;      //store frequencies
        }
        unordered_set<int> st;
        for(auto &it:mpp){
            int freq=it.second;
        if(st.find(freq)!=st.end())
        return false;
        st.insert(freq);
    }
    return true;
    }
};
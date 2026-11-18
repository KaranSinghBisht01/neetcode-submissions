class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int l=0,r=0,maxlen=0;
        while(r<s.size()){
            while(l<r && freq.count(s[r])){
                freq.erase(s[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            freq[s[r]]++;
            r++;
        }
        return maxlen;
    }
};

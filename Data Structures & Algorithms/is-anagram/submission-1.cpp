class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        int n=s.size(),m=t.size();
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        for(int j=0;j<m;j++){
            arr[t[j]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0) return false;
        }
        return true;
    }
};

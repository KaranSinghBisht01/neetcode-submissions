class Solution {
public:
    unordered_map<int,string> st;
    string encode(vector<string>& strs) {
        string encoded="";
        for(int i=0;i<strs.size();i++){
            encoded+=strs[i];
            st[i]=strs[i];
        }
        return encoded;
    }   

    vector<string> decode(string s) {
        vector<string> decoded;
        int n=st.size();
        for(int i=0;i<n;i++){
            decoded.push_back(st[i]);
        }
        return decoded;
    }
};

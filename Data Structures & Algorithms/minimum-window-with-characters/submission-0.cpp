class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> countT,window;
        for(int i=0;i<t.size();i++){
            countT[t[i]]++;
        }
        int need=countT.size(),have=0,l=0;
        int st=-1,ed=-1,maxlen=INT_MAX;

        for(int r=0;r<s.size();r++){
            window[s[r]]++;
            if(countT[s[r]]==window[s[r]]) have++;

            while(have==need){
                if((r-l+1)<maxlen){
                    st=l,ed=r;
                    maxlen=r-l+1;
                }
                window[s[l]]--;
                if(countT.count(s[l]) && window[s[l]]<countT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        if(st==-1) return "";
        return s.substr(st,maxlen);
    }
};

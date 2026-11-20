class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> freq;
        for(int i=0;i<s1.size();i++){
            freq[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            if(freq.count(s2[i])){
                int j=i;
                unordered_map<char,int> temp=freq;
                for( j=i;j<s2.size();j++){
                    if(!temp.count(s2[j])){
                        break;
                    }
                    temp[s2[j]]--;
                    if(temp[s2[j]]==0) temp.erase(s2[j]);
                    if(temp.size()==0) return 1;
                }
                i=j;
            }
        }
        return false;
    }
};

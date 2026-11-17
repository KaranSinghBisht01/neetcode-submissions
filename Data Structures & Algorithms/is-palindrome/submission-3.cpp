class Solution {
public:
    bool ischar(char ch){
        return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'));
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            while(i<j && !ischar(s[i])){
                i++;
            }
            while(i<j && !ischar(s[j])){
                j--;
            }
            s[i]=tolower(s[i]);
            s[j]=tolower(s[j]);
            if(s[i]!=s[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
};
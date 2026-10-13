class Solution {
public:
    string longestCommonPrefix(vector<string>&s){
        sort(s.begin(), s.end());
        string ans="";
        int i=0;
        int length=s.size();
        while(i<s[0].length() && i<s[length-1].length()){
            if(s[0][i]==s[length-1][i])ans+=s[0][i];
            else break;
            i++;
        }
        return ans;
    }
};
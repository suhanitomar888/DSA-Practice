class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>freq(26,0);
        vector<int>window(26,0);
        for(int x:p){
            freq[x-'a']++;
        }
        //Initially,the window is empty.As we move through s,we add each character to window & count its freq.
        //Window size =p.length()
        for(int i=0;i<s.length();i++){
            window[s[i] - 'a']++;
            if(i>=p.length())window[s[i-p.length()]-'a']--;
            if(i>=p.length()-1 && window==freq)        //check if window size is equal to minimum p.length()
            ans.push_back(i-(p.length()-1));
        }
        return ans;
    }
};
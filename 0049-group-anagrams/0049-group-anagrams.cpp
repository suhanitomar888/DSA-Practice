class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Map:
        // Key   -> Sorted version of the string
        // Value -> All strings having the same sorted form
        unordered_map<string, vector<string>> mp;

        // Traverse every string in the input
        for (string word : strs) {

            // Make a copy so that the original word remains unchanged
            string key = word;

            // Sort the copy to create a unique key
            // Example:
            // "eat" -> "aet"
            // "tea" -> "aet"
            sort(key.begin(), key.end());

            // Store the original word in the corresponding group
            mp[key].push_back(word);
        }

        // This will store the final grouped anagrams
        vector<vector<string>> ans;

        // Traverse the map
        for (auto it : mp) {

            // Add each group of anagrams to the answer
            ans.push_back(it.second);
        }

        // Return all groups
        return ans;
    }
};
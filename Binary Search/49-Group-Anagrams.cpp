class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        cin.tie(0), cin.sync_with_stdio(0), cout.tie(0);
        unordered_map<string, vector<string>> hash_mp;

        for (auto& str : strs) {
            string hash = "000000000000000000000000000000000000000000000000000000000000000000000000000000000";
            int count[26] { 0 };
            for (char c : str) count [c - 'a']++;

            for (int i = 25; i >= 0; --i) {
                int cnt = count[i];
                
                int d = cnt % 10;
                hash[i * 3 + 2] = d - '0';
                cnt /= 10;
                d = cnt % 10;
                hash[i * 3 + 1] = d - '0';
                cnt /= 10;
                d = cnt % 10;
                hash[i * 3] = d - '0';
            }

            hash_mp[hash].push_back (str);
        }

        vector<vector<string>> ans;
        for (auto& p : hash_mp) {
            ans.push_back (p.second);
        }

        return ans;
    }
};
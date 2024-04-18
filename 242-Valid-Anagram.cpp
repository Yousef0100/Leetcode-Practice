class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> counts { 0 };

        for (auto c : s)
            counts[c]++;
        
        for (auto c : t)
            counts[c]--;
        
        for (auto count : counts)
            if (count.second != 0)
                return false;

        return true;
    }
};
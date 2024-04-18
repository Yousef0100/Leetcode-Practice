class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_table;

        for (int i = 0; i < nums.size(); ++i)
            hash_table[nums[i]] = i;
        
        for (int i = 0; i < nums.size(); ++i) {
            int comp = target - nums[i];
            if (hash_table.count(comp) && hash_table[comp] != i)
                return {i, hash_table[comp]};
        }

        return {};
    }
};
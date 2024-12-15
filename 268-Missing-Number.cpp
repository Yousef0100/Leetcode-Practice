class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int t_sum = n * (n + 1) / 2;

        int curr_sum = 0;
        for (auto& x : nums)
            curr_sum += x;
        
        int x = t_sum - curr_sum;
        return x;
    }
};
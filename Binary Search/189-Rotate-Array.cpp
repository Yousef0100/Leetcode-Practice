class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0 || n == 1) return;

        vector<int> r_arr(n);
        k %= n;
        int st_idx = n - k;
        st_idx %= n;
        int j = 0;
        k = n;
        while (k--) {
            r_arr[j++] = nums[st_idx++];
            st_idx %= n;
        }

        st_idx = 0;
        for (auto& el : nums) el = r_arr[st_idx++];
    }
};
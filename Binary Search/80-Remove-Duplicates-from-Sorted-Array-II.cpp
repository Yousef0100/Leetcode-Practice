class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int r = 1;
        int cnt = 1;
        int val = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i] == val) cnt++;
            else {
                cnt = 1;
                val = nums[i];
            }

            if (cnt <= 2) {
                nums[r++] = nums[i];
            }
        }

        
        return r;
    }
};
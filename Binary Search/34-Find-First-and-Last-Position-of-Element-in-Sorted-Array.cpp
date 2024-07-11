class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = -1, j = -1;
        int size = nums.size();

        int l = 0, h = size - 1, ans = -1;
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (target >= nums[mid]) {
                if (target == nums[mid]) ans = mid;
                l = mid + 1;
            } else h = mid - 1;
        }

        j = ans;

        l = 0, h = (j < 0) ? (size - 1) : (j - 1), ans = j;
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (target <= nums[mid]) {
                if (target == nums[mid]) ans = mid;
                h = mid - 1;
            } else l = mid + 1;
        }

        i = ans;

        return {i, j};
    }
};

class Solution {
public:
    Solution () {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }
    
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;
            
            if (target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};
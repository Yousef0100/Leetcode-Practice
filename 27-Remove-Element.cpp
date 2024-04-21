class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        
        for (auto el : nums) {
            if (el == val)
                continue;
            
            nums[k++] = el;
        }

        return k;
    }
};
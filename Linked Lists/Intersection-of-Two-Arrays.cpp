class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int freq[1001] { 0 };
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> ans;

        for (int i = 0; i < n1; ++i) {
            freq[nums1[i]]++;
        }

        for (int i = 0; i < n2; ++i) {
            int f = freq[nums2[i]];
            if (f != 0 && f != -1) {
                ans.push_back(nums2[i]);
                freq[nums2[i]] = -1;
            }
        }

        return ans;
    }
};
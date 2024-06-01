class Solution {
public:
    Solution () {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }
    
    int binary (vector<int>& v, int left, int right, int val) {
        int l = left, h = right;
        
        while (l <= h) {
            int mid = (l + h) / 2;
            
            if (v[mid] == val)
                return mid;
            
            if (val > v[mid])
                l = mid + 1;
            else 
                h = mid - 1;
        }
        
        return l;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int p1 = 0, p2 = 0, n1 = nums1.size(), n2 = nums2.size();
        bool search_nums1 = false;
        while (p1 < n1 && p2 < n2) {
            if (nums1[p1] == nums2[p2])
                return nums1[p1];
            
            search_nums1 = !(nums1[p1] > nums2[p2]);
            int l = (search_nums1) ? p1 : p2;
            int h = ((search_nums1) ? n1 : n2) - 1;

            l = binary((search_nums1)? nums1 : nums2, l, h, max(nums1[p1], nums2[p2]));
            
            ((search_nums1) ? p1 = l : p2 = l);
        }

        return -1;
    }
};
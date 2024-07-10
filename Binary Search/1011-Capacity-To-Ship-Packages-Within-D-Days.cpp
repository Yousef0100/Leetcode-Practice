class Solution {
public:
    bool can (vector<int>& weights, int capacity, int days) {
        ios::sync_with_stdio(false);
        int size = weights.size();
        int curr_capacity = 0;

        for (int i = 0; i < size; ++i) {
            if (curr_capacity + weights[i] > capacity) {
                days--;
                if (days == 0) return false;
                curr_capacity = weights[i];
            } else curr_capacity += weights[i];
        }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        ios::sync_with_stdio(false);
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        int ans = l;
        
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (can (weights, mid, days)) {
                h = mid - 1;
                ans = mid;
            } else l = mid + 1;
        }

        return ans;
    }
};
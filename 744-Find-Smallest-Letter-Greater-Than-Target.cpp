class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = (int)letters.size();
        int l = 0, h = size - 1;
        while (l < h) {
            int mid = l + (h - l) / 2;

            if (letters[mid] <= target)
                l = mid + 1;
            else
                h = mid;
        }

        if (letters[h] > target)
            return letters[h];
        else
            return letters[0];
    }
};
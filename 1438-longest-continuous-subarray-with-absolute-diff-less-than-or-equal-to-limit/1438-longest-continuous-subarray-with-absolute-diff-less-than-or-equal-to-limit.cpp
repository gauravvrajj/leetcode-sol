class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // multiset to maintain the elements within the current window
        multiset<int> window;
        int left = 0, maxLength = 0;

        for (int right = 0; right < nums.size(); ++right) {
            window.insert(nums[right]);

            // Check if the absolute difference between the maximum and minimum
            // values in the current window exceeds the limit
            while (*window.rbegin() - *window.begin() > limit) {
                // Remove the element at the left pointer from the multiset
                window.erase(window.find(nums[left]));
                // Move the left pointer to the right to exclude the element
                // causing the violation
                ++left;
            }

            // Update maxLength with the length of the current valid window
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
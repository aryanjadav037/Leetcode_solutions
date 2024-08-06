class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        // Step 1: Find the first decreasing element from the end
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        // Step 2: If such an element is found
        if (i >= 0) {
            int j = n - 1;
            // Find the next larger element to swap with nums[i]
            while (nums[j] <= nums[i]) {
                j--;
            }
            // Swap the elements
            swap(nums[i], nums[j]);
        }
        // Step 3: Reverse the elements after position i
        reverse(nums.begin() + i + 1, nums.end());
    }
};

//first find first position and then find last position 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        // Find first occurrence
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;   // move left
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        // If target not found at all
        if (first == -1) return {-1, -1};

        // Find last occurrence
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;   // move right
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
    
};

//Problem name : Minimum Size Subarray Sum

// Variables Meaning : 
// 1. left → start of the window
// 2. right → end of the window
// 3. sum → sum of elements in the current window
// 4. len → minimum subarray length found so far
// The right pointer expands the window, the left pointer shrinks it, and we track the smallest window whose sum meets the target.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int len = INT_MAX;
        int n = nums.size();

        for(int right = 0; right < n ; right++){
            sum += nums[right];

            while(sum >= target){
            
            len = min(len ,right-left +1);
            sum -= nums[left];
            left++;
         }

        }
        return (len == INT_MAX) ? 0: len;
    }
};

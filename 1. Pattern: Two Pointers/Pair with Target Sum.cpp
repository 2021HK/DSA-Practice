// Keep two pointers

// left → start of array

// right → end of array

// Check sum of arr[left] + arr[right]

// If equal to target → pair found

// If less than target → move left++

// If greater than target → move right--

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        int i = 0, j = nums.size()-1;
        while(i < j){
            int sum = nums[i] + nums [j];
            if(sum == target)return{i,j};
            if(sum < target ) ++i;
            else --j;
        }
        return {};
       
    }
};

// Algorithm (Kadane’s Algorithm)
// Initialize:
// currentSum = nums[0]
// maxSum = nums[0]
// Loop from index 1 to n-1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

       // if(nums.size() < 1) return -1;

        int CurrentSum =nums[0] ;
        int MaxSum = nums[0] ; 

        for(int i = 1 ; i < nums.size(); i++){
            CurrentSum = max(nums[i],CurrentSum + nums[i]);
            MaxSum = max(MaxSum,CurrentSum);
        }

        return MaxSum;
        
    }
};

// Negative numbers become large positive squares

// The largest square will be at either end (left or right)

// Use two pointers and fill the result from the end

// “Compare both ends, put the bigger square at the end,
// then move that pointer and keep filling backward!”


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        int left = 0;
        int right = n-1;
        int pos = n-1 ;


        while (left <= right){
            int leftSq = nums[left]*nums[left];
            int rightSq = nums[right]*nums[right];


            if(leftSq > rightSq){
                res[pos] = leftSq;
                left++;
            }else {
                res[pos] = rightSq;
                right--;
            }
            pos--;
        }
        return res;
       
    }
};

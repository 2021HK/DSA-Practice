// First, calculate the sum of the first K elements.

// Then slide the window:

// Add the next element

// Remove the element going out of the window

// Track the maximum sum seen so far.

//  Time Complexity: O(n)
//  Space Complexity: O(1)

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        if( k > n) return -1;
        
        int windosum = 0 ;
        int maxsum = 0 ;
        
        for(int i = 0 ; i < k ; i++){
            windosum += arr[i];
        }
        
        maxsum = windosum;
        
        for(int i = k ; i < n ; i++){
            
            windosum += arr[i];
            
            windosum -=arr[i-k];
            
            maxsum = max(windosum, maxsum);
        }
        return maxsum;
    }
};

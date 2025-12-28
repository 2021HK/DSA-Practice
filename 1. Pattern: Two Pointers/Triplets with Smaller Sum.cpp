// Sort array

// Loop i = 0 → n-3

// left = i+1, right = n-1

// curr = arr[i] + arr[left] + arr[right]

// If curr < sum → count += (right - left) and left++

// Else → right--

// Return count

class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort (arr, arr+n);
        long long count = 0;
        
        for(int i= 0; i< n-2; i++){
            int left = i+1; 
            int right = n-1;
            
            while(left < right){
                long long curr = arr[i] + arr[left] + arr[right];
                
                if(curr < sum){
                    count += (right-left);
                    left++;
                }else{
                    right--;
                }
            }
        }
        return count;
    }
};

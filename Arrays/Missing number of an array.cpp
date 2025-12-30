#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int n = nums.size();
        
        // XOR with all indices 0 to n-1
        for (int i = 0; i < n; i++) {
            xor1 ^= i;          // XOR of indices
            xor2 ^= nums[i];    // XOR of array values
        }
        
        // Also XOR with n (because range is 0 to n)
        xor1 ^= n;
        
        // XOR of xor1 and xor2 gives the missing number
        return xor1 ^ xor2;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << sol.missingNumber(nums) << endl;
    return 0;
}

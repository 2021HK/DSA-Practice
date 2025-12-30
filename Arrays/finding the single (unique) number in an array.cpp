// XOR all elements

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        // XOR all elements
        for (int num : nums) {
            result ^= num;
        }
            return result;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;  // size of array
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << sol.singleNumber(nums) << endl;
    return 0;
}

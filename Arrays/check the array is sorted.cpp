// arr[i] >= arr[i-1] aur nums[i] > nums[i+1]
// Feature	arr[i] >= arr[i-1]	nums[i] > nums[i+1]
// Loop start	i = 1	i = 0
// Loop end	i < n	i < n-1
// Comparison	current ≥ previous	current > next
// Readability	Slightly more intuitive	Slightly trickier for beginners
// Common usage in interviews	Very common	Less common


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if(sol.isSorted(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

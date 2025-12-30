#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int secondLargest(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > first){
                second = first;
                first = nums[i];
            }
            else if(nums[i] > second && nums[i] != first){
                second = nums[i];
            }
        }
        
        // If second largest doesn't exist
        if(second == INT_MIN){
            return -1;  // or some flag value
        }
        
        return second;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << sol.secondLargest(nums) << endl;

    return 0;
}

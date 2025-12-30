//  Sorted array => duplicates are together
//  We compare each element with the last unique element
//  We overwrite duplicate spots to “push” unique values forward
//  Time = O(n)
// Space = O(1) (no extra array)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int i = 0;  // unique elements ka index

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
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

    int k = sol.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;
    cout << "Array: ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    return 0;
}

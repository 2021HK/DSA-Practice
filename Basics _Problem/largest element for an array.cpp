#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     int largestElement(vector<int>& nums) {
         int larg = 0 ; 
         
         for(int i = 0; i < nums.size() ; i++){
             if(nums[i] > larg){
                 larg = nums[i];
             }
         }
         return larg;
     }
    
};

int main () {
    Solution sol;
    int n ; 
    cin >> n ;
    
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>> nums[i];
    }
    cout << sol.largestElement(nums) << endl;
    
    return 0;
}

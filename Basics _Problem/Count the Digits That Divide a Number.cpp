
#include <iostream> 
using namespace std;

class Solution {
public:
    int countDigits(int num){
        int n = num;
        int count = 0;

        while(n > 0){
            int digit = n % 10;
            if(digit != 0 && num % digit == 0){
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;  // number of numbers to read

    for(int i = 0; i < n; i++){
        int nums;
        cin >> nums;
        cout << sol.countDigits(nums) << endl;
    }

    return 0;
}

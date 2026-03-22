// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0 ;
        int result = n ;
         while (n > 0){
            
            int digit = n % 10 ;
            
            sum = sum +(digit*digit*digit);
            
            n = n/10 ;
        }
        if(sum == result){
            return true;
        }else{
            return false;
        }
        
    }
};

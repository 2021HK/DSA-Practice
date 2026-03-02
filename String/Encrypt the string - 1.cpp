// s = "aabc"
// Output: 1c1b2a

class Solution {
  public:
    string encryptString(string s) {
        // code here
        string result = "";
        int n = s.size();
        
        for(int i = 0  ; i < n ;){
            char ch = s[i];
            int count = 0 ;
            
            while( i < n && s[i] == ch){
                count++;
                i++;
            }
            
            result += ch;
            result += to_string(count);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

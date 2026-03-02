// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string result = "";
        
        for(int i = 0 ; i  < s.size(); i++){
            char ch = s[i];
            
            if(ch >='a' && ch <= 'z' || ch >='A' && ch <= 'Z'){
                result += ch;
            }
        }
        if(result.empty()){
            return "-1";
        }
        
        return result ;
    }
};

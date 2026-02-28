// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string result = "";
        
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            
            if(c != 'a' && c != 'e' && 
               c != 'i' && c != 'o' && 
               c != 'u') {
                result += c;
            }
        }
        return result;
    }
};

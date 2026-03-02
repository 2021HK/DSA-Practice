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

--------------------- 
  second way 
  class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        
        unordered_set<char> vowels = {'a','e','i','o','u'};
        string result = "";
        
        for(int i =0; i < s.size(); i++){
            if(vowels.find(s[i]) == vowels.end()){
                result += s[i];
            }
            
        }
        return result;
    }
};

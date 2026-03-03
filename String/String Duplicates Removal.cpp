// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> dupli ;
        string result = "";
        
        for(int i = 0 ; i < s.size(); i++){
            char ch = s[i];
            
            if(dupli.find(ch) == dupli.end()) {
            dupli.insert(ch);
            result += ch;
            }
        }
        return result;
    }
};

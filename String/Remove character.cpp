// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        
        unordered_set<char> removeSet(str2.begin(), str2.end());
        
        string result = "";
        
        for(int i = 0 ; i < str1.size() ; i ++){
            char ch = str1[i];
            
            if(removeSet.find(ch) == removeSet.end()) {
                result += ch;
        }
        }
        return result;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char , int> count;

        for(char c : s) count[c]++;
        for(char c : t){
            if(count[c] == 0) return false;
            count[c]--;
        }
        return true;
    }
};


---------------------
    class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        if(s1 == s2)return true;
        return false;
    }
};

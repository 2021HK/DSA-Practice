class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0 ;
        for(int i = 0; i < columnTitle.length(); i++)
        {
            char ch = columnTitle[i];
            int value = ch - 'A'+ 1;
            result = result * 26 + value;
        }
        return result;
    }
};

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxfreq = 0;
        int ans = 0;

        for(int x :nums){
            freq[x]++;

            if(freq[x] > maxfreq){
                maxfreq = freq[x];
                ans = freq[x];
            }else if(freq[x] == maxfreq){
                ans = ans + freq[x];
            }
        }
        return ans;
    }
};

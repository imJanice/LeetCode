class Solution {
public:
    int minDeletions(string s) {
        vector<int> table(26, 0);
        int ans = 0;
        int diff = 0;
        for(int i=0;i<s.length();i++){
            table[s[i] - 'a']++;
        }
        sort(table.begin(), table.end(), greater<int>());
        for(int i=1; i<26; i++){
            if(table[i] >= table[i - 1]){
                diff = table[i] - table[i - 1] + 1;
                diff = min(table[i], diff);
                table[i] -= diff;
                ans += diff;
            }
        }
        return ans;
    }
};
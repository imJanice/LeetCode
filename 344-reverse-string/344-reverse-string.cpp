class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int ed = s.size() - 1;
        int t = s.size() / 2;
        while(t--){
            auto tmp = s[st];
            s[st] = s[ed];
            s[ed] = tmp;
            st++;
            ed--;
        }
    }
};
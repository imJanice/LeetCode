class Solution {
public:
    int removePalindromeSub(string s) {
        string re = s;
        reverse(begin(re), end(re));
        if(re == s){
            return 1;
        }else{
            return 2;
        }
    }
};
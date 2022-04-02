class Solution {
public:
    bool palindrome(string s, int st, int ed){
        int state = true;
        int error = 0;
        int bak_st, bak_ed;
        while(st <= ed){
            if(s[st] != s[ed]){
                if(error > 2){
                    state = false;
                    break;
                }else if(error == 0){
                    bak_st = st;
                    bak_ed = ed;
                    st++;
                }else{
                    st = bak_st;
                    ed = bak_ed--;
                }
                error++;
            }else{
                st++;
                ed--;
            }
        }
        return state;
    }
    bool validPalindrome(string s) {
        return palindrome(s, 0, s.size()-1);
    }
};
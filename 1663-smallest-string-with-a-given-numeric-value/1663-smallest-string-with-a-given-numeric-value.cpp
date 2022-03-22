class Solution {
public:
    string getSmallestString(int n, int k) {
        int tg = 26;
        int less = k;
        char dict[26] = {'a','b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string ans(n, 'a');
        for(int i = 1;i <= n; i++){
            if((less - (n - i)) < tg){
                tg = less - (n - i);
            }
            less -= tg;
            ans[n - i] = dict[tg - 1];
            if(tg == 1){
                break;
            }
        }
        return ans;
    }
};
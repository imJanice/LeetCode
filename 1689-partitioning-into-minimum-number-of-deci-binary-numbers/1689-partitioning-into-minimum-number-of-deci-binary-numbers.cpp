class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        int digit = 0;
        for(int i=0;i<n.length();i++){
            digit = (n[i] - '0') * 1;
            if(digit > ans){
                ans = digit;
            }
            if(digit == 9){
                break;
            }
        }
        return ans;
    }
};
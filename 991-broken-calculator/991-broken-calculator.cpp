class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans = 0;
        while(target != startValue){
            if((target > startValue) && (target % 2 == 0)){
                target /= 2;
            }else{
                if(target < startValue){
                    ans += (startValue - target);
                    break;
                }else{
                    target += 1;
                }
            }
            ans++;
        }
        return ans;
    }
};
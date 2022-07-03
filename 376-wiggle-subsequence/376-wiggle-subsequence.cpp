class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int diff;
        int prev = 0;
        int ans = 1;
        for(int i=1;i<nums.size();i++){
            diff = nums[i] - nums[i-1];
            if(diff < 0 && prev >= 0 || diff > 0 && prev <= 0){
                ans++;
                prev = diff;
            }
        }
        return ans;
    }
};
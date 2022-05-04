class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ed = nums.size()-1;
        int i=0;
        int ans = 0;
        while(i < ed){
            if(nums[i] + nums[ed] == k){
                i++;
                ed--;
                ans++;
            }else if(nums[i] + nums[ed] > k){
                ed--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
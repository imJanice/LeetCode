class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ed = nums.size()-1;
        int ans = 0;
        for(int i=0;i<nums.size();){
            if(i >= ed){
                break;
            }
            
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
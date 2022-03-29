class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> bag(nums.size(), 0);
        int i;
        for(i=0;i<nums.size();i++){
            bag[nums[i]]++;
            if(bag[nums[i]] > 1){
                break;
            }
        }
        return nums[i];
    }
};
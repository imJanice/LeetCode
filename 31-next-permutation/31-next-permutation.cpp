class Solution {
public:
    void sorting(vector<int>& nums, int st, int ed){
        int tmp;
        if(st < ed){
            for(int i=st;i<ed;i++){
                for(int j=i+1;j<ed;j++){
                    if(nums[i]>nums[j]){
                        tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                    }
                }
            }
        }
    }
    void nextPermutation(vector<int>& nums) {
        int tmp;
        bool state = true;
        int min;
        int idx;
        for(int i=nums.size()-1;i > 0;i--){
            if(nums[i] > nums[i-1]){
                min = nums[i];
                idx = i;
                for(int j=i;j<nums.size();j++){
                    // find the smallest item that larger than nums[i-1]
                    if((nums[j]>nums[i-1]) && (min>nums[j])){
                        min = nums[j];
                        idx = j;
                    }
                }
                tmp = nums[idx];
                nums[idx] = nums[i-1];
                nums[i-1] = tmp;
                sorting(nums, i, nums.size());
                state = false;
                break;       
            }
        }
        if(state){
            sort(nums.begin(), nums.end());
        }
    }
};
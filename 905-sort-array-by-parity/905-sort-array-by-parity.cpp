class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even_idx = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 == 0){
                even_idx++;
                swap(nums[even_idx], nums[i]);
            }
        }
        return nums;
    }
};


/** slowly but intuitive
vector<int> sortArrayByParity(vector<int>& nums) {
    int idx = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[idx] % 2 == 0){
            idx++;
        }else{
            nums.push_back(nums[idx]);
            nums.erase(nums.begin() + idx);
        }
    }
    return nums;
}
**/
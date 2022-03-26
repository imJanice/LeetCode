class Solution {
public:
    int biSearch(int s, int e, int tg, vector<int>& nums){
        if(s > e){
            return -1;
        }
        
        int mid = (e - s) / 2 + s;
        if(tg > nums[mid]){
            return biSearch(mid + 1, e, tg, nums);
        }else if(tg < nums[mid]){
            return biSearch(s, mid - 1, tg, nums);
        }else{
            return mid;
        }
    }
    int search(vector<int>& nums, int target) {
        return biSearch(0, nums.size() - 1, target, nums);
    }
};
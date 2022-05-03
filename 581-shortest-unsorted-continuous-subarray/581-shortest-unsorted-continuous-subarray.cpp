class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int st = 0, ed = nums.size()-1;
        vector<int> v(nums.size());
        v=nums;
        sort(v.begin(),v.end());
        for (int key : v){
            if(key != nums[st]){
                break;
            }
            st++;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(ed <= st){
                break;
            }
            if(v[i] != nums[ed]){
                break;
            }
            ed--;
        }
        
        return ed-st+1;
    }
};
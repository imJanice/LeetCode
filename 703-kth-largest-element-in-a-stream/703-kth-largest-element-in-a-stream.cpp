class KthLargest {
public:
    vector<int> max3;
    int idx;
    KthLargest(int k, vector<int>& nums) {
        idx = k;
        sort(nums.begin(), nums.end());
        if(nums.size() > k){
            for(int i=nums.size()-k;i<nums.size();i++){
                max3.push_back(nums[i]);
            }
        }else{
            for(int t:nums){
                max3.push_back(t);
            }
        }
    }
    int add(int val) {
        if(max3.size()<idx){
            max3.push_back(val);
            sort(max3.begin(), max3.end());
            return max3[0];
        }else{
            if(max3[0]>val){
                return max3[0];
            }else{
                max3[0]=val;
                sort(max3.begin(), max3.end());
                return max3[0];
            }
        }
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
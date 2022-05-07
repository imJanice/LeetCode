class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        // i < j < k
        // nums[i] < nums[k] < nums[j]
        // stack : first in last out
        // put 2 inside stack
        // check if 3 greater than 2
        // get max 2 inside stack
        // if 1 < 2 than return true
        stack<int> s;
        int k = INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i] < k) return true;
            while(!s.empty() && nums[i] > s.top()){
                k = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
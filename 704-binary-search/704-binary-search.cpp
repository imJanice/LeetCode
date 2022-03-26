class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int s = 0, e = nums.size() - 1;
        int mid;
        while(e >= s){
            mid = (e - s) / 2 + s;
            cout << s << " "<< e<<endl;
            cout << mid << endl;
            if(target > nums[mid]){
                s = mid + 1;
            }else if(target < nums[mid]){
                e = mid - 1;
            }else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0;
        int right = people.size() - 1;
        int ans = 0;
        sort(people.begin(), people.end());
        while(left < right){
            if(people[right] == limit){
                right--;
            }else if(people[left] + people[right] > limit){
                right--;
            }else{
                // people[left] + people[right] < limit
                right--;
                left++;
            }
            ans++;
            if(left == right){
                ans++;
                break;
            }
        }
        return ans;
    }
};
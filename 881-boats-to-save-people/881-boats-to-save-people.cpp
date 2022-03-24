class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l = 0;
        int r = people.size() - 1;
        int ans = 0;
        sort(people.begin(), people.end());
        while(l < r){
            if(people[r] == limit){
                r--;
            }else if(people[l] + people[r] > limit){
                r--;
            }else{
                // people[left] + people[right] < limit
                r--;
                l++;
            }
            ans++;
            if(l == r){
                ans++;
                break;
            }
        }
        return ans;
    }
};
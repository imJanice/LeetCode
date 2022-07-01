class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b) {
        return a.back() > b.back();
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans  = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        for(vector<int> t : boxTypes){
            if(t[0] <= truckSize){
                truckSize -= t[0];
                ans += t[0] * t[1];
            }else{
                ans += truckSize * t[1];
                break;
            }
        }
        return ans;
    }
};
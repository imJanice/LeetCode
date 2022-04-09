class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> kmax;
        // Declare vector of pairs
        vector<pair<int, int>> sortMap;
        vector<int> ans;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            kmax[nums[i]]++;
        }
        // Copy key-value pair from Map
        // to vector of pairs
        for (auto tmp : kmax) {
            sortMap.push_back(tmp);
        }
        // Sort using comparator function
        sort(sortMap.begin(), sortMap.end(), cmp);
        for (auto tmp : sortMap) {
            //cout<<tmp.first<<" "<<tmp.second<<endl;
            ans.push_back(tmp.first);
            count++;
            if(count==k){
                break;
            }
        }
        return ans;
    }
};
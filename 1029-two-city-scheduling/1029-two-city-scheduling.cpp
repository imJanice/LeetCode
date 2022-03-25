

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans = 0;
        int a = costs.size() / 2, b = costs.size() / 2;
        for(int i=0;i<costs.size();i++){
            for(int j=0;j<costs.size();j++){
                if(abs(costs[i][0] - costs[i][1]) > abs(costs[j][0] - costs[j][1])){
                    auto tmp = costs[j];
                    costs[j] = costs[i];
                    costs[i] = tmp;
                }
            }
        }
        for(int i=0;i<costs.size();i++){
            if((b == 0) || ((costs[i][0] < costs[i][1]) && (a != 0))){
                // a city short
                a--;
                ans += costs[i][0];
            }else{
                // b city short
                b--;
                ans += costs[i][1];
            }
        }
        return ans;
    }
};
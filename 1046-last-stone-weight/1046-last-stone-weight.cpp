class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x = stones.size()-2, y = stones.size()-1;
        int min = 0;
        sort(stones.begin(), stones.end());
        while(stones.size()>1){
            if(stones[x]==stones[y]){
                stones.pop_back();
                stones.pop_back();
                x -= 2;
                y -= 2;
            }else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(stones[y]-stones[x]);
                sort(stones.begin(), stones.end());
                x -= 1;
                y -= 1;
            }
        }
        if(stones.size()==1){
            min = stones[0];
        }
        return min;
    }
};
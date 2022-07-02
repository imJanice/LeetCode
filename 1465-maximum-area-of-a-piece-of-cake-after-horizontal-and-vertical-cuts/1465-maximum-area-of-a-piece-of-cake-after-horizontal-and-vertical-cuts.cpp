class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int MOD = 1e9 + 7;
        long maxh = 0;
        long maxw = 0;
        int tmp = 0;
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        for(int i=0;i<horizontalCuts.size();i++){
            if(i==0){
                tmp = horizontalCuts[i] - 0;
            }else{
                tmp = horizontalCuts[i] - horizontalCuts[i - 1];
            }
            if(tmp > maxh){
                maxh = tmp;
            }
        }
        tmp = 0;
        for(int i=0;i<verticalCuts.size();i++){
            if(i==0){
                tmp = verticalCuts[i] - 0;
            }else{
                tmp = verticalCuts[i] - verticalCuts[i - 1];
            }
            if(tmp > maxw){
                maxw = tmp;
            }
        }
        return (maxh % MOD * maxw % MOD) % MOD;
    }
};
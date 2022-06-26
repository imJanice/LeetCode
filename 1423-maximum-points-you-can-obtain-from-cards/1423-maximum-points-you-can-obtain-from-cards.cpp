class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i, j;
        int total = 0;
        int window_sum = 0;
        int window_size = cardPoints.size() - k;
        int min = INT_MAX;
        for(i=0 ;i<cardPoints.size();i++){
            total += cardPoints[i];
            if(i == (window_size - 1)){
                window_sum = total;
            }
            if(i > (window_size - 1)){
                window_sum = window_sum + cardPoints[i] - cardPoints[i - window_size];
            }
            if(i >= (window_size - 1)){
                if(window_sum < min){
                    min = window_sum;
                }
            }
        }
        return total - min;
    }
};
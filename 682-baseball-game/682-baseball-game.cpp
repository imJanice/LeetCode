class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        int total = 0;
        for(string s : ops){
            if(s == "C"){
                score.pop_back();
            }else if(s == "D"){
                score.push_back(score[score.size()-1]*2);
            }else if(s == "+"){
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            }else{
                score.push_back(stoi(s));
            }
        }
        for(int n : score){
            total += n;
        }
        return total;
    }
};
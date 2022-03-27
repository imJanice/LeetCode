class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> bag;
        vector<int> ans;
        int count;
        int tmp;
        int del;
        for(int i=0;i<mat.size();i++){
            count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            bag.push_back(count);
            ans.push_back(i);
        }
       
        for(int i=0;i<bag.size()-1;i++){
            for(int j=0;j<bag.size()-i-1;j++){
                if(bag[j]>bag[j+1]){
                    tmp = bag[j];
                    bag[j] = bag[j+1];
                    bag[j+1] = tmp;
                    
                    tmp = ans[j];
                    ans[j] = ans[j+1];
                    ans[j+1] = tmp;
                }
            }
        }
        
        del = ans.size() - k;
        while(del--){
            ans.pop_back();
        }
        return ans;
    }
};
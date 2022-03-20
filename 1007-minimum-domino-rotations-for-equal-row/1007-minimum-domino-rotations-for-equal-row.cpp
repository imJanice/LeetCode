class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int top[6]={0};
        int btm[6]={0};
        int sam[6]={0};
        int size = tops.size();
        int ans = -1;
        for(int i=0;i<size;i++){
            top[tops[i]-1]++;
            btm[bottoms[i]-1]++;
            if(tops[i]==bottoms[i]){
                sam[tops[i]-1]++;
            }
        }
        // check if swap possible
        for(int i=0;i<6;i++){
            if((top[i]+btm[i]-sam[i])>=size){
                //cout<<i+1<<endl;
                if(top[i]<btm[i]){
                    ans=top[i]-sam[i];
                }else{
                    ans=btm[i]-sam[i];
                }
                //cout<<ans<<endl;
            }
        }
        return ans;
    }
};
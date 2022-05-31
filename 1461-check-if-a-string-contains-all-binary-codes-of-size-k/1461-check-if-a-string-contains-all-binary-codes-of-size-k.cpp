class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size() < k) return false;
        string tmp;
        unordered_set<string> allBiType;
        for(int i=0;i<s.size()-k+1;i++){
            tmp = "";
            for(int j=i;j<i+k;j++){
                tmp += s[j];
            }
            allBiType.insert(tmp);
        }
        if(pow(2,k) == allBiType.size()){
            return true;
        }else{
            return false;
        }
    }
};
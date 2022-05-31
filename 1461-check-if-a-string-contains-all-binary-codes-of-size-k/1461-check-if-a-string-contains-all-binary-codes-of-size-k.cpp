class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        unordered_set<string> allBiType;
        for (int i = 0; i < n - k + 1; i++)
            allBiType.insert(s.substr(i, k));
        return allBiType.size() == pow(2, k) ? true : false;
    }
};



/*
----- 05/31/2022 22:32	Accepted	810 ms	67.1 MB	cpp
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
*/
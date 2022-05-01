class Solution {
public:
    string cleanBackspace(string s){
        vector<char> str(s.begin(), s.end());
        set<int> remove;
        vector<char> cleanStr;
        for(int i=0;i<str.size();i++){
            if(str[i] == '#'){
                remove.insert(i);
                remove.insert(i-1);
            }
        }
        for(int i=0;i<str.size();i++){
            if(remove.count(i) == 0){
                cleanStr.push_back(str[i]);
            }
        }
        return string(cleanStr.begin(), cleanStr.end());
    } 
    string clean(string s){
        string out;
        for(int i=0;i<s.length();i++){
            if(s[i] == '#'){
                s[i] = '_';
                for(int j=i-1;j>=0;j--){
                    if(s[j] != '_'){
                        s[j] = '_';
                        break;
                    }
                }
            }
        }
        for(char c : s){
            if(c != '_'){
                out += c;
            }
        }
        return out;
    }
    bool backspaceCompare(string s, string t) {
        s = clean(s);
        t = clean(t);
        if(s == t){
            return true;
        }else{
            return false;
        }
    }
};
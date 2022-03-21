struct Dict{
    int first;
    int last;
};

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<char> ext;
        vector<struct Dict> place;
        struct Dict tmp;
        int index;
        int ptr, start;
        for(int i=0;i<s.size();i++){
            auto ptr = find(ext.begin(), ext.end(), s[i]);
            if(ptr==ext.end()){
                // never exist before
                ext.push_back(s[i]);
                tmp.first = i;
                tmp.last = i;
                place.push_back(tmp);
            }else{
                // already exist
                index = ptr - ext.begin();
                place[index].last = i;
            }
        }
        ptr = place[0].last;
        start = place[0].first;
        for(int i = 1;i<place.size();i++){
            /*cout<<ext[i]<<endl;
            cout<<place[i].first<<endl;
            cout<<place[i].last<<endl;*/
            if(place[i].first<ptr){
                if(place[i].last>ptr){
                    ptr = place[i].last;
                }
            }else{
                ans.push_back(ptr-start+1);
                ptr = place[i].last;
                start = place[i].first;
            } 
        }
        ans.push_back(ptr-start+1);
        return ans;
    }
};
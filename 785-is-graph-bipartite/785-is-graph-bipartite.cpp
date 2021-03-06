class Solution {
public:
    // Visit all nodes and recursively
    // for each node, add the node to set A, while adding its connections to another set B
    // In the end check to see if the two sets overlap. If they do return false, otherwise return true.
    bool isBipartite(vector<vector<int>>& graph) {
        set<int> A = {0};
        set<int> B;
        set<int> visited;
        bool expect = false;
        bool ans = true;
        for(int i=0;i<graph.size();i++){
            classification(i, A, B, visited, expect, graph);
        }
        
        for(int node : A){
            if(B.count(node) == 1){
                ans = false;
                break;
            }
        }
        return ans;
    }
    
    void classification(int node, set<int>& A, set<int>& B, set<int>& visited, bool expect, vector<vector<int>>& graph){
        if(visited.count(node) == 1) return;
        visited.insert(node);
        if(expect){
            for(int n : graph[node]){
                A.insert(n);
                classification(n, A, B, visited, !expect, graph);
            }
        }else{
            for(int n : graph[node]){
                B.insert(n);
                classification(n, A, B, visited, !expect, graph);
            }
        }
        
    }
};
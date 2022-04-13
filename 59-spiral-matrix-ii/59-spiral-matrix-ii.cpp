class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int direction = 0;
        int idx = 1;
        int x = 0, y = 0;
        while(idx <= n*n){
            cout<<x<<" "<<y<<endl;
            ans[x][y] = idx;
            idx++;
            switch(direction){
                case 0:
                    y++;
                    if(y > (n-1)){
                        break;
                    }
                    if(ans[x][y] != 0){
                        y--;
                        x++;
                        direction = 1;
                    }
                    if(y == (n-1)){
                        direction = 1;
                    }
                    break;
                case 1:
                    x++;
                    if(ans[x][y] != 0){
                        x--;
                        y--;
                        direction = 2;
                    }
                    if(x == (n-1)){
                        direction = 2;
                    }
                    break;
                case 2:
                    y--;
                    if(ans[x][y] != 0){
                        y++;
                        x--;
                        direction = 3;
                    }
                    if(y == 0){
                        direction = 3;
                    }
                    break;
                case 3:
                    x--;
                    if(ans[x][y] != 0){
                        x++;
                        y++;
                        direction = 0;
                    }
                    if(x == 1){
                        direction = 0;
                    }
                    break;
            }
        }
        return ans;
    }
};
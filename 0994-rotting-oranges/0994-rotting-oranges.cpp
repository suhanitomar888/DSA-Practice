class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int rows = grid.size();
         int cols = grid[0].size();

         queue<pair<int,int>> q;
         int fresh = 0;

         for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(grid[r][c] == 2) q.push({r,c});
                else if(grid[r][c] == 1) fresh++;
            }
         }

         int minutes = 0;
         if(fresh == 0) return 0;

         while(!q.empty()){
            int size = q.size();
            minutes++;

            while(size--){  
                pair<int, int> frontCell = q.front();
                q.pop();

                int r = frontCell.first;
                int c = frontCell.second;

                // up
                if(r > 0 && grid[r-1][c] == 1){
                    grid[r-1][c] = 2;
                    fresh--;
                    q.push({r-1,c});
                }

                // down
                if(r < rows-1 && grid[r+1][c] == 1){
                    grid[r+1][c] = 2;
                    fresh--;
                    q.push({r+1,c});
                }

                // left
                if(c > 0 && grid[r][c-1] == 1){
                    grid[r][c-1] = 2;
                    fresh--;
                    q.push({r,c-1});
                }

                // right
                if(c < cols-1 && grid[r][c+1] == 1){
                    grid[r][c+1] = 2;
                    fresh--;
                    q.push({r,c+1});
                }
            }

            if(q.empty()) minutes--;
         }

         return (fresh == 0) ? minutes : -1;
    }
};
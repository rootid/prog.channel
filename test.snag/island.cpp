#include<iostream> 
#include<vector>
using namespace std;

void traversal (vector<vector<char> > &grid,int i,int j, vector<vector<int> > &visited
        ,bool& isIsland) {
    
    int row[] = {1,-1,0,0};
    int col[] = {0,0,1,-1};
    int m = grid.size();
    int n = grid[0].size();
    int len = sizeof(row)/sizeof(row[0]);
    if ( i>=0 && j>=0 &&  i < m && j < n && visited[i][j] == 0 && grid[i][j] == '1') {
        visited[i][j] = 1;
        isIsland = true;
        for (int k=0;k<len;k++) {
          traversal(grid,row[k]+i,col[k]+j,visited,isIsland);  
        } 
    }
}

int numIslands(vector<vector<char> > &grid) {
    
        int numOfIsland = 1;
        int m = grid.size();
        bool isIsland = false;
        if (m <= 1) {
            return numOfIsland;
        } 
        int n = grid[0].size();
        vector<vector<int> > visited (m,vector<int>(n,0));
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                traversal(grid,i,j,visited,isIsland); 
                if (isIsland == true) {
                    numOfIsland++;
                }
                isIsland = false;
            }
        }
        return numOfIsland;
    
}

int main () {

    vector<vector<char>> grid;

}

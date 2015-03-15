

1-------m
|
|
|
n


bool searchInCol (vector<vector <int> >&a,int start,int col,int key) {
    
    int end = a[0].size();
    
    while (start <= end) {
        if (a[start][col] == key) {
            return true;
        }
       start = start + 1;
    }
    return false;
}

bool searchInRow (vector<vector <int> >&a,int row,int end,int key) {

    int start = 0;
    while (start <= end) {
        if (a[row][start] == key ) {
            return true;
        }
        start = start + 1;
    }
    return false;
}

bool searchIn2dMatrix (vector<vector <int>> &a,in key) {

    int m = a.size();
    int n = a[0].size();
    int start = 0;
    int end = 0;
    for (int i=0;i<m;i--) {        
        
        int j = n - i - 1;
        if (a[i][j] == key ) {
              
        }
        if (a[i][j] < key) {
            //find key in the Row
            start = i;
            end = j;  
            if ( searchInRow(a,start,end,key)  == true) {
               return true;
            }  
        
        } else if (a[i][j] > key) {
            //find key in the column
            start = i;
            end = j;
            if ( searchInCol(a,start,end,key) == true ) {
                return true;
            }
        }
        
        
    }

    return false;
}

#include<iostream>

bool validateSudoku (vector<vector<char> >& s ) {

    for(int i=0;i<9;i++) {    
        vector<int> row(9,0);
        vector<int> col(9,0);
        vector<int> subRowCol (9,0);
          //Traverse all columns
          for (int j=0;j<9;j++) {
            if (s[i][j] != '' ) {
               
               int cell = s[i][j] - '0';
               if (col[cell] != 0 ) {
                   return false;
               } 
               col[cell] = 1;    
            }
            
            
            if (s[j][i] != '.' ) {
               int cell = s[j][i] - '0';
               if (col[cell] != 0 ) {
                   return false;
               } 
               col[cell] = 1;    
            }
            
           
           if (s[i/3*3+j/3] [i%3 *3 + j%3] != '.') {
           
               int cell = s[i/3*3+j/3] [i%3 *3 + j%3] - '0';
               if (subRowcol [cell] != 0) {
                   return false;
               }
               subRowCol[cell] = 1;
           } 
                
         }
        
    }

}

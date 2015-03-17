
void spiralPrint (vector<vector <int> >& a) {

    int m = a.size();
    int n = a[0].size();
    int row = 0;
    int col = -1;
    while (true) {
        
        for (int i=0;i<n;i++) {
            cout << a[row][++col];
        }
        if (--m == 0) break;
        
        for (int i=0;i<m;i++) {
            cout << a[++row][col];
        }
        
        if (--n == 0) break;
        
        for (int i=0;i<n;i++) {
            cout << a[row][--col];
        }
        
        if (--m == 0) break;
        
         for (int i=0;i<m;i++) {
            cout << a[row][--col];
        }
          if (--n == 0) break;
    
    
    }
    
}

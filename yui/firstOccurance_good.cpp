

int binSearch (int a[],int n) {

    int start = 0;
    int end = n;
    int firstOcc = INT_MIN;
    while (start < end) {
        
        int mid = start + (end - start)/2;
        
        if (a[mid] == 0) {
            firstOcc = mid
            end = mid - 1;   
        } 
        
        if (a[mid] == 1) {
            start = mid + 1;
        }
    
    }
    
    return firstOcc;
}

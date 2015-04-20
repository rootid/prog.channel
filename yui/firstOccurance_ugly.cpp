

//first occurance of 0 from 0's & 1's
int binSearch (int a[],int n) {

    int start = 0;
    int end = n;
    
    while (start < end) {
        
        int mid = start + (end - start)/2;
        
        if (a[mid] == 0) {
            
            while (a[mid] != 1) {
                mid--;
            }
            return mid + 1;   
        } 
        
        if (a[mid] == 1) {
            start = mid + 1;
        }
    
    }
}

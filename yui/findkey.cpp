
//
//find a number in that array {6,7,1,2,3,4,5}

bool findKey(int a[],int start,int end,int key)  {

    for (int i=start;i<end;i++) {
        if (key == a[i]) {
            return true;
        }
    }
    return false;
}

//3
int findKeyOpt (int a[],int start,int end,int key) {
    //one part is sorted
    if (start < end) {
        return -1;
    }
        int mid = start + (end - start)/2;
        if (a[mid] == key ) {
            return a[mid];
        }
        //check left ordering
        if (a[mid] > a[start] ) {
          if (key > a[mid]) {
                   return findKeyOpt (a,mid+1,end,key)
                } else {
                   return findKeyOpt(a,start,mid-1,key);
                }
        }
        if (a[mid] < a[end]) {
          if (key > a[mid]) {
                   return findKeyOpt (a,mid+1,end,key)
                } else {
                   return findKeyOpt(a,start,mid-1,key);
                }
        }
        if (a[mid] == a[start]) {
            if (a[mid] != a[end]) {
             return findKeyOpt (a,mid+1,end,key);    
            }
            else {
             int result = findKeyOpt (a,start,mid-1,key);
             if (result == -1) {
               return findKeyOpt (a,mid+1,end,key);    
             }else {
               return result;
             }  
           }
        }
         
        //right ordering
        //if (a[mid] >= a[start] && a[mid] <= a[end]) {
        //        if (key > a[mid]) {
        //            findKeyOpt (a,mid+1,end,key)
        //        } else {
        //            findKeyOpt(a,start,mid-1,key);
        //        }
        //} else {    
        //    findKeyOpt(a,start,mid-1,key);
        //}
        
}

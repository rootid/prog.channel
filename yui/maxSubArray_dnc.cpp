
public  int maxSubCrossing (int l,int r,int mid,int[] a) {
    int suml = 0;
    int maxl = Integer.MIN_VALUE;

    for (int i = mid; i >= l; i--) {
        suml += a[i];
        if (suml > maxl) {
            maxl = suml;
        }
    }
    int sumr = 0;
    int maxr = Integer.MIN_VALUE;

    for (int i = mid +1; i <= r; i++) {
        sumr += a[i];
        if(sumr > maxr) {
            maxr = sumr;
        }
    }
    return maxl+maxr;
}

public  int maxSubInOneSection (int l,int r, int[] a) {

    if(l == r) {
        return a[l];
    }

    int mid = (l+r)/2;
    int lmax = 0;
    int rmax = 0;
    int crossMax = 0;
    int max = Integer.MIN_VALUE;

    lmax = maxSubInOneSection(l,mid,a);
    rmax = maxSubInOneSection(mid+1,r,a);
    crossMax = maxSubCrossing(l,r,mid,a);

    if (lmax > rmax){
        max = lmax;
    } else {
        max = rmax;
    }
    if(crossMax >max){
        max = crossMax;
    }
    return max;
}
 //dive and conquer end

public  int maxSubArray(int[] A) {
    int max = 0;
    max = maxSubInOneSection(0,A.length-1,A);
    return max;
}

int main () {

}


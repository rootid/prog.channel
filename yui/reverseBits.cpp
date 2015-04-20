#include<iosteam>

uint_32 reverseBits (uint_32 n) {

    for (int i=0;i<16;i++) {
    
        //if bits are different
        if ( (n>>i & 1) ^ (n >> 31-i) & 1 ) {
        
            n = (n ^ (1 << i | 1 << (31-i)) );
        }
        
    }
    
    return n;

}

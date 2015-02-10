
given two rectangles

overlap or not?

1.when rectangle is not overlapping

  1. p1  p2  4. p2 p1
  2.
      p1  3. p2
      
      p2     p1
  

struct Point {
    int x;
    int y;
};

struct Rectagle {
    Point lstPoint[4];
};


bool isOverlapping (Rectangle &p1,Rectangle &p2) {

        
       if ( (p1.point[2].x < p2.point[2].x )
        
        && (p2.point[1].y < p1.point.[3].y )
        
        && (p2.point[3].y > p1.point.[1].y )
        
        && (p2.point[4].x < p1.point[1].x ) ) {
        
            return false;
        }
        
        return true;
       
}


         p1
    point[1]   point[2]                
    point[3]   point[4]
   
            p2
    point[1]   point[2]
    point[3]   point[4]

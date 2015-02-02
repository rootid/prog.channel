#include<iostream>


//At a abstract level circular buffer is queue where from one end data is inserted (producer) while 
//from other end data is removed (consumer)


//Calculation of the occupancy or the remaining capacity of an arbitrarily sized
//circular buffer would normally be a slow operation, requiring the use of a
//modulus (divide) instruction.  However, if the buffer is of a power-of-2 size,
//then a much quicker bitwise-AND instruction can be used instead.



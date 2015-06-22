Little Black Panda is mad about XOR operation. Presently he has gone mad and he won't stop performing XOR operation on various numbers.
Given an array of N numbers, for each subset of the array Little Panda performs MAXOR operation for the subset. MAXOR operation means that he finds XOR of all elements in that subset (if the subset is [1,2,3] then MAXOR is 1^2^3=0) . Little Panda is now exhausted and wants to do something else. Little Panda wants to pick any two subsets the MAXOR of whose are same. Little Panda needs to find the number of selections that he can make. He is very very weak in programming so he wants the answer from you. Please help little panda in finding out his query.
Since the output can be very large output it modulo 1000000007.

Input Format
The first line contains N i.e. the length of the array.
N lines follow, each containing a non-negative integer.

Output Format
Output Little Panda's Query in a single line.

Constraints
1 <= N <= 100000
0 <= A[i] <= 100
(where A[i] denotes the value of array element)

Sample Input(Plaintext Link)
 3
1 2 3
Sample Output(Plaintext Link)
 3
Explanation
Little Panda can pick the subsets:
1. {1,3} and {2} whose MAXOR is 2. 2. {1,2} and {3} whose MAXOR is 3. 3. {2,3} and {1} whose MAXOR is 1.


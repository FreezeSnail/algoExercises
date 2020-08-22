# VI
### Example 1
    O(2N) -> O(N)

### Example 2
    O(N^2)

### Example 3
    for(i = 0 through n)
        for (i+1 though n)

    * (N-1) + (N-2) + ... + (1)
    * ~ sum(1 though N-1)
    * = N(N-1)/2
    * O((N^2 -N)/2) -> O(N^2)

### Example 4
    O(A*B)

### Example 5
    O(A*B*10000) -> O(A*B)

### Example 6
    O(N/2) -> O(N)


### Example 7
    A, B, C are equivelent

### Example 8
    N length string array
     O(a ln a) + O(b ln b) + ... for each string
     let S be the longest length string, then each string is sorted <= O(S ln S)
     O(N * (S ln S)) to sort each string
     0(N ln N ) to sort the array, but each pair of string takes up to O(S) comparisions
     0(S* (N ln N ))
     O((N * (S ln S)) + (S *(N ln N))) -> O(N*S(ln S + ln N))

     ** Don't forget sorting a string is not as fast as comparing two numbers

### Example 9
    O(N)
    * Given a tree on depth N, there are at most ln N nodes
    * The we have 2 ^depth nodes total 
    * We can say then that there is 2^ln N nodesor O(2^ln N) to reach all of them 
    * P = 2^ln N
    * log2(p) = log2(N)
    * p = N
    * thus N = 2^ln N -> O(N)


### Example 10
    *  for 2 through root N
    *  O(root(N))

### Example 11
    O(N)

### Example 12
    ### recursive case
        for 1 to string length
            2 -> l
                3 -> l
                    .......
                        l ->l
        l * l-1 * ... * l - (l-2) * 1
        1 * 2 * ... * l
        -> l! permutations

        depth of l -> l * l!  (not 100% on this)

        printing, creating the remainder string, concation the strings in the recursive call all take O(L) 

        l * l! O(3L) 
        ->O(l^2 * l!) as an upper bound
        

### Example 13
    O(2^N) recursive calls
    * recursive fib tends towards 1.6^N as 0 and 1 case don't have 2 branches

### Example 14 
    * fib takes 2^N
    * 2^0 + 2^1 + 2^2 + ... 2^N
    * 2^N+1 + 1
    * O(2^N)

### Example 15
    < O(2^N)
    * f(0) -> 1
    * f(1) -> 1
    * f(2) -> men1 1 + memo 1 -> 1
    * ...
    * O(N)
    *** Example of Memoization

### Example 16
    O(ln N)


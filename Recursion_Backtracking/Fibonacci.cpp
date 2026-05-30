class Solution {
public:
    int fib(int n) {
        // Base case
        if(n <= 1)
            return n;

        // Recursive calls
        return fib(n - 1) + fib(n - 2);
    }
};

class Solution {
public:
    int fib(int n) {
        int sl,last;
        if (n<=1)
        return n;
        last=fib(n-1);
        sl=fib(n-2);
        return last+sl;
    }
};
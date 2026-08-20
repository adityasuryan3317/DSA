class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        long long a = 0;
        long long b = 1;
        long long sum;
        for (int i = 2; i <= n; i++) {
            sum = a + b;
            a=b;
            b=sum;
        }
        return sum;
    }
};
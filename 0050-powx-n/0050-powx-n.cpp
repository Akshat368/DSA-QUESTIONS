class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        bool neg = nn < 0;
        if (neg) nn = -nn;

        double ans = 1.0;
        while (nn > 0) {
            if (nn % 2 == 1) {
                ans = ans * x;
                nn = nn - 1;
            } else {
                x = x * x;
                nn = nn / 2;
            }
        }
        return neg ? 1.0 / ans : ans;
    }
};
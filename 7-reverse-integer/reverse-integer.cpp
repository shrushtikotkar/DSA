#include <climits>

class Solution {
public:
    int reverse(int x) {
        long long revnum = 0;
        int ld;

        while (x != 0) {
            ld = x % 10;
            revnum = (revnum * 10) + ld;
            x = x / 10;
        }

        if (revnum > INT_MAX || revnum < INT_MIN) {
            return 0;
        }

        return (int)revnum;
    }
};
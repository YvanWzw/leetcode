class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total = 1;
        if (n == 0)
            return 0;
        while (n  != 1)
        {
            int y = n % 2;
            if (y == 1)
                total++;
            n /= 2;
        }
        return total;
    }
};
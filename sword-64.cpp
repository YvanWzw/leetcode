class Solution {
public:
    int sumNums(int n) {
        int total = n;
        n && (total+=sumNums(n-1));
        return total;
    }
};
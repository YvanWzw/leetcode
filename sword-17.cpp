class Solution {
public:
    vector<int> printNumbers(int n) {
        int maxNum=pow(10,n);
        vector<int> vec;
        for(int i=1;i<maxNum;i++)
        {
            vec.push_back(i);
        }
        return vec;
    }
};
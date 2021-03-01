class Solution {
public:
    string replaceSpace(string s) {
        string newStr="";
        for(auto iter:s)
        {
            if(iter!=' ')
            newStr+=iter;
            else
            newStr+="%20";
        }
        return newStr;
    }
};
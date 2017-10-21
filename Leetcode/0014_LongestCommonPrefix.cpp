//https://leetcode.com/problems/longest-common-prefix/description/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool mismatch = false;
        int idx = 0;
        string str = "";
        
        if (strs.size() == 0) {
            return str;
        }
        
        if (strs.size() == 1 ) {
            return strs[0];
        }
        
        while (!mismatch) {
            for(int i = 1;i < strs.size(); i++) {
                if (idx >= strs[i-1].size() || idx >= strs[i].size() || strs[i-1][idx] != strs[i][idx]) {
                    mismatch = true;
                    break;
                }
            }
            if (!mismatch) 
                str += strs[0][idx];
            idx++;
        }
        return str;
    }
};

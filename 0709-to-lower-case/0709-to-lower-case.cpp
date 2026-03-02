class Solution {
public:
    string toLowerCase(string s) {
        string a;
        for (int i=0;i<s.size();i++){
            a+=tolower(s[i]);
        }
        return a;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        char xor1=' ';
        char xor2=' ';
        for (int i=0;i<s.size();i++){
            xor1^=s[i];
        }
        for (int j=0;j<t.size();j++){
            xor2^=t[j];
        }
        return xor1^xor2;
    }
};
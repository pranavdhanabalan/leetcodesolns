class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> str(s.size());
        int j=0;
        for (int i=s.size()-1;i>=0;i--){
            str[j]=s[i];
            j++;
        }
        s=str;
    }
};
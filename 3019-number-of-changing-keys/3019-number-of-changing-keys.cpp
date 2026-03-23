class Solution {
public:
    int countKeyChanges(string s) {
        for (int i=0;i<s.size();i++){
            if (isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
        char key=s[0];
        int c=0;
        for (int i=0;i<s.size();i++){
            if (s[i]!=key){
                c++;
                key=s[i];
            }
        }
        return c;
    }
};
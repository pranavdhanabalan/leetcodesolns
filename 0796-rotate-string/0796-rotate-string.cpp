class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        if (s==goal) return true;
        int i=1;
        while(i<s.size()){
            string temp=s;
            reverse(temp.begin(),temp.begin()+i);
            reverse(temp.begin()+i,temp.end());
            reverse(temp.begin(),temp.end());
            if (temp==goal)
                return true;
            i++;
        }
        return false;
    }
};
class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> order;
        for (int i=0;i<s.size();i++){
            order[s[i]]++;
        }
        int c=0;
        for (auto it: order){
            c++;
        }
        return c;
    }
};
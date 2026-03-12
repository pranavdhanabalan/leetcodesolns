class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> order;
        for (int i=0;i<s.length();i++){
            order[s[i]]++;
        }
        int min=INT_MAX;
        for (auto it:order){
            if (it.second==1){
                int index = s.find(it.first);
                if(index < min){
                    min= index;
                }
            }
        }
        if(min == INT_MAX) return -1;
        return min;
    }
};
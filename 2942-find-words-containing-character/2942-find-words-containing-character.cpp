class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i=0;i<words.size();i++){
            bool present=false;
            for (int j=0;j<words[i].size();j++){
                if (x==words[i][j]){
                    present=true;
                }
            }
            if (present==true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
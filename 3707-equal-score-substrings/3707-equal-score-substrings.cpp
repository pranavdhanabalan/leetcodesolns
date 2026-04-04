class Solution {
public:
    bool scoreBalance(string s) {
        vector<int> ans1;
        for (int i=0;i<s.size();i++){
            int a=s[i];
            ans1.push_back(a-96);
        }
        vector<int> ans2=ans1;
        for (int i=1;i<ans1.size();i++){
            ans1[i]=ans1[i]+ans1[i-1];
        }
        reverse(ans2.begin(),ans2.end());
        for (int i=1;i<ans2.size();i++){
            ans2[i]=ans2[i-1]+ans2[i];
        }
        for (int i=0;i<ans2.size()-1;i++){
            if (ans1[i]==ans2[ans2.size()-i-2]){
                return true;
            }
        }
        return false;
    }
};
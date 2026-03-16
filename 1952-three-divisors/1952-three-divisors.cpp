class Solution {
public:
    bool isThree(int n) {
        vector<int> ans;
        for (int i=1;i<=n/2;i++){
            if (n%i==0){
                ans.push_back(i);
            }
        }
        cout<<ans.size()<<endl;
        if (ans.size()+1==3){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> order;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            for (int j=0;j<nums[i].size();j++){
                order[nums[i][j]]++;
            }
        }
        for (auto it: order){
            if (it.second==nums.size()){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
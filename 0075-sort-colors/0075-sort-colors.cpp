class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> order;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            order[nums[i]]++;
        }
        for (int i=0;i<order[0];i++){
            ans.push_back(0);
        }
        for (int i=0;i<order[1];i++){
            ans.push_back(1);
        }
        for (int i=0;i<order[2];i++){
            ans.push_back(2);
        }
        nums=ans;
    }
};
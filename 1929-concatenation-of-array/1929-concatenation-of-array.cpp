class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans; int j=0;
        ans=nums;
        ans.resize(2 * nums.size());
        for (int i=nums.size();i<((nums.size())*2);i++){
            ans[i]=nums[j];
            j++;
        }
        return ans;
    }
};
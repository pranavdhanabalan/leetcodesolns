class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> order;
        for (int i=0;i<nums.size();i++){
            order[nums[i]]++;
        }
        int max=0,c=0;
        for (auto it: order){
            if (it.second>c){
                c=it.second;
                max=it.first;
            }
        }
        return max;
    }
};
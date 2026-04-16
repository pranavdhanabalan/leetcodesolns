class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
        return 0;
        int longest=1;
        unordered_set<int> order;
        for (int i=0;i<nums.size();i++){
            order.insert(nums[i]);
        }
        for (auto it: order){
            if (order.find(it-1)==order.end()){
                int c=1;
                int x=it;
                while(order.find(x+1)!=order.end()){
                    x++;
                    c++;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
        return 0;
        sort(nums.begin(),nums.end());
        int longest=1;
        int least=INT_MIN;
        int count=0;
        for (int i=0;i<nums.size();i++){
            if ((nums[i]-1)==least){
                least=nums[i];
                count++;
            }
            else if (nums[i]!=least){
                count=1;
                least=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
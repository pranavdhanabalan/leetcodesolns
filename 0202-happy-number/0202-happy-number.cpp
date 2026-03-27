class Solution {
public:
    bool isHappy(int n) {
        int sum=n;
        unordered_set<int> seen;
        while(sum!=1){
            if (seen.count(sum)) return false;  
            seen.insert(sum);
            n=sum;
            sum=0;
            while(n>0){
                sum+=((n%10)*(n%10));
                n/=10;
            }
        }
        return true;
    }
};
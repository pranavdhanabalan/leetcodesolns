class Solution {
public:
    int reverseBits(int n) {
        vector<int> order(32,0);
        int i=31,j=31;
        long long int sum=0,base=1;
        while(n>0&&i>=0){
            order[i]=n%2;
            n/=2;
            i--;
        }
        reverse(order.begin(),order.end());
        while(j>=0){
            sum+=(base*order[j]);
            base*=2;
            j--;
        }
        return sum;
    }
};
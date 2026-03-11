class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==divisor) return 1;
        bool sign=true;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend>=0 && divisor<0) sign=false;
        if(dividend<0 && divisor>0) sign=false;
        long long n=llabs((long long)dividend),d=llabs((long long)divisor);
        long long ans=0;
        while(n>=d){
            long long count=0;
            while(n>=(d<<(count+1))){
                count++;
            }
            ans+=(1ll<<count);
            n-=(d*(1ll<<count));
        }
        if (ans>=INT_MAX && sign)
            return INT_MAX;
        if (ans>INT_MAX && !sign)
            return INT_MIN;
        return sign?ans:(-ans);
    }
};
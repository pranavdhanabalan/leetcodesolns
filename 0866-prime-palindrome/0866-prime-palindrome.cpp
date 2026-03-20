class Solution {
public:
    int primePalindrome(int n) {
        if (n==1){
            return 2;
        }
        
        while(true){
            if (10000000 < n && n < 100000000)
                n = 100000000;
            int c=0;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    c++;
                    break;
                }
            }
            if (c==0){
                string num=to_string(n);
                string temp=to_string(n);
                reverse(temp.begin(),temp.end());
                if (temp==num){
                    return n;
                }
            }
            n++;
        }
    }
};
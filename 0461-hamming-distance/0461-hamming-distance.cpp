class Solution {
public:
    int hammingDistance(int x, int y) {
        if (x==y)
        return 0;
        int n=0;
        int c=x^y;
        while(c>0){
            if (c%2==1){
                n++;
            }
            c/=2;
        }
        return n;
    }
};
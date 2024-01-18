class Solution {
public:
    int climbStairs(int n){
        long long int x=1;
        long long int y=1;
        for(int i=0;i<n;i++){
            long long int tmp = x;
            x=x+y;
            y=tmp;
            }
        return y;
    }
};
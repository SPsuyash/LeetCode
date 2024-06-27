class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        int ans=start^goal;
     
            while(ans)
            {
                c+=ans&1;
                ans>>=1;
        }
        return c;
    }
};
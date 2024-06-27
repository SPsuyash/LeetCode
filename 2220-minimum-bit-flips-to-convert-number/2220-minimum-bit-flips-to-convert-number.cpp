class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        int ans=start^goal;
        for(int i=0;i<31;i++)
        {
            if(ans)
            {
                c+=ans&1;
                ans>>=1;
            }
        }
        return c;
    }
};
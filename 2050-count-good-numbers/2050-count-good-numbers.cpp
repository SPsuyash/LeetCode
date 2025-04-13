class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp, int mod) {
        if(exp==0)
        {
            return 1;
        }
        long long half=modPow(base,exp/2,mod);
        long long result=(half*half)%mod;
        if(exp%2==1)
        {
            result=(result*base)%mod;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
      long long even = modPow(5, (n + 1) / 2, MOD);
        long long odd = modPow(4, n / 2, MOD);
        return (even * odd) % MOD;
    }
};

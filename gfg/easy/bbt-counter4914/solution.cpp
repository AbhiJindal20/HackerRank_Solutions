class Solution {
  public:
    int countBT(int h) {
        // code here
        if (h == 0 || h == 1) return 1;
        long long mod = 1e9 + 7;
        long long dp0 = 1;
        long long dp1 = 1;
        long long ans = 0;
        for (int i=2;i<=h;++i){
            ans = (dp1 * (dp1 + 2 * dp0)) % mod;
            dp0 = dp1;
            dp1 = ans;
        }
        return dp1;
    }
};